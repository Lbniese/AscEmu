/*
 * AscEmu Framework based on ArcEmu MMORPG Server
 * Copyright (C) 2014-2016 AscEmu Team <http://www.ascemu.org>
 * Copyright (C) 2008-2012 ArcEmu Team <http://www.ArcEmu.org/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _AUTHCODES_H
#define _AUTHCODES_H

// client 3.3.3, 2010/03/20
enum LoginErrorCode
{
    E_RESPONSE_SUCCESS                                       = 0x00,
    E_RESPONSE_FAILURE                                       = 0x01,
    E_RESPONSE_CANCELLED                                     = 0x02,
    E_RESPONSE_DISCONNECTED                                  = 0x03,
    E_RESPONSE_FAILED_TO_CONNECT                             = 0x04,
    E_RESPONSE_CONNECTED                                     = 0x05,
    E_RESPONSE_VERSION_MISMATCH                              = 0x06,

    E_CSTATUS_CONNECTING                                     = 0x07,
    E_CSTATUS_NEGOTIATING_SECURITY                           = 0x08,
    E_CSTATUS_NEGOTIATION_COMPLETE                           = 0x09,
    E_CSTATUS_NEGOTIATION_FAILED                             = 0x0A,
    E_CSTATUS_AUTHENTICATING                                 = 0x0B,

    E_AUTH_OK                                                = 0x0C,
    E_AUTH_FAILED                                            = 0x0D,
    E_AUTH_REJECT                                            = 0x0E,
    E_AUTH_BAD_SERVER_PROOF                                  = 0x0F,
    E_AUTH_UNAVAILABLE                                       = 0x10,
    E_AUTH_SYSTEM_ERROR                                      = 0x11,
    E_AUTH_BILLING_ERROR                                     = 0x12,
    E_AUTH_BILLING_EXPIRED                                   = 0x13,
    E_AUTH_VERSION_MISMATCH                                  = 0x14,
    E_AUTH_UNKNOWN_ACCOUNT                                   = 0x15,
    E_AUTH_INCORRECT_PASSWORD                                = 0x16,
    E_AUTH_SESSION_EXPIRED                                   = 0x17,
    E_AUTH_SERVER_SHUTTING_DOWN                              = 0x18,
    E_AUTH_ALREADY_LOGGING_IN                                = 0x19,
    E_AUTH_LOGIN_SERVER_NOT_FOUND                            = 0x1A,
    E_AUTH_WAIT_QUEUE                                        = 0x1B,
    E_AUTH_BANNED                                            = 0x1C,
    E_AUTH_ALREADY_ONLINE                                    = 0x1D,
    E_AUTH_NO_TIME                                           = 0x1E,
    E_AUTH_DB_BUSY                                           = 0x1F,
    E_AUTH_SUSPENDED                                         = 0x20,
    E_AUTH_PARENTAL_CONTROL                                  = 0x21,
    E_AUTH_LOCKED_ENFORCED                                   = 0x22,

    E_REALM_LIST_IN_PROGRESS                                 = 0x23,
    E_REALM_LIST_SUCCESS                                     = 0x24,
    E_REALM_LIST_FAILED                                      = 0x25,
    E_REALM_LIST_INVALID                                     = 0x26,
    E_REALM_LIST_REALM_NOT_FOUND                             = 0x27,

    E_ACCOUNT_CREATE_IN_PROGRESS                             = 0x28,
    E_ACCOUNT_CREATE_SUCCESS                                 = 0x29,
    E_ACCOUNT_CREATE_FAILED                                  = 0x2A,

    E_CHAR_LIST_RETRIEVING                                   = 0x2B,
    E_CHAR_LIST_RETRIEVED                                    = 0x2C,
    E_CHAR_LIST_FAILED                                       = 0x2D,

    E_CHAR_CREATE_IN_PROGRESS                                = 0x2E,
    E_CHAR_CREATE_SUCCESS                                    = 0x2F,
    E_CHAR_CREATE_ERROR                                      = 0x30,
    E_CHAR_CREATE_FAILED                                     = 0x31,
    E_CHAR_CREATE_NAME_IN_USE                                = 0x32,
    E_CHAR_CREATE_DISABLED                                   = 0x33,
    E_CHAR_CREATE_PVP_TEAMS_VIOLATION                        = 0x34,
    E_CHAR_CREATE_SERVER_LIMIT                               = 0x35,
    E_CHAR_CREATE_ACCOUNT_LIMIT                              = 0x36,
    E_CHAR_CREATE_SERVER_QUEUE                               = 0x37,
    E_CHAR_CREATE_ONLY_EXISTING                              = 0x38,
    E_CHAR_CREATE_EXPANSION                                  = 0x39,
    E_CHAR_CREATE_EXPANSION_CLASS                            = 0x3A,
    E_CHAR_CREATE_LEVEL_REQUIREMENT                          = 0x3B,
    E_CHAR_CREATE_UNIQUE_CLASS_LIMIT                         = 0x3C,
    E_CHAR_CREATE_CHARACTER_IN_GUILD                         = 0x3D,
    E_CHAR_CREATE_RESTRICTED_RACECLASS                       = 0x3E,
    E_CHAR_CREATE_CHARACTER_CHOOSE_RACE                      = 0x3F,
    E_CHAR_CREATE_CHARACTER_ARENA_LEADER                     = 0x40,
    E_CHAR_CREATE_CHARACTER_DELETE_MAIL                      = 0x41,
    E_CHAR_CREATE_CHARACTER_SWAP_FACTION                     = 0x42,
    E_CHAR_CREATE_CHARACTER_RACE_ONLY                        = 0x43,
    E_CHAR_CREATE_CHARACTER_GOLD_LIMIT                       = 0x44,
    E_CHAR_CREATE_FORCE_LOGIN                                = 0x45,

    E_CHAR_DELETE_IN_PROGRESS                                = 0x46,
    E_CHAR_DELETE_SUCCESS                                    = 0x47,
    E_CHAR_DELETE_FAILED                                     = 0x48,
    E_CHAR_DELETE_FAILED_LOCKED_FOR_TRANSFER                 = 0x49,
    E_CHAR_DELETE_FAILED_GUILD_LEADER                        = 0x4A,
    E_CHAR_DELETE_FAILED_ARENA_CAPTAIN                       = 0x4B,

    E_CHAR_LOGIN_IN_PROGRESS                                 = 0x4C,
    E_CHAR_LOGIN_SUCCESS                                     = 0x4D,
    E_CHAR_LOGIN_NO_WORLD                                    = 0x4E,
    E_CHAR_LOGIN_DUPLICATE_CHARACTER                         = 0x4F,
    E_CHAR_LOGIN_NO_INSTANCES                                = 0x50,
    E_CHAR_LOGIN_FAILED                                      = 0x51,
    E_CHAR_LOGIN_DISABLED                                    = 0x52,
    E_CHAR_LOGIN_NO_CHARACTER                                = 0x53,
    E_CHAR_LOGIN_LOCKED_FOR_TRANSFER                         = 0x54,
    E_CHAR_LOGIN_LOCKED_BY_BILLING                           = 0x55,
    E_CHAR_LOGIN_LOCKED_BY_MOBILE_AH                         = 0x56,

    E_CHAR_NAME_SUCCESS                                      = 0x57,
    E_CHAR_NAME_FAILURE                                      = 0x58,
    E_CHAR_NAME_NO_NAME                                      = 0x59,
    E_CHAR_NAME_TOO_SHORT                                    = 0x5A,
    E_CHAR_NAME_TOO_LONG                                     = 0x5B,
    E_CHAR_NAME_INVALID_CHARACTER                            = 0x5C,
    E_CHAR_NAME_MIXED_LANGUAGES                              = 0x5D,
    E_CHAR_NAME_PROFANE                                      = 0x5E,
    E_CHAR_NAME_RESERVED                                     = 0x5F,
    E_CHAR_NAME_INVALID_APOSTROPHE                           = 0x60,
    E_CHAR_NAME_MULTIPLE_APOSTROPHES                         = 0x61,
    E_CHAR_NAME_THREE_CONSECUTIVE                            = 0x62,
    E_CHAR_NAME_INVALID_SPACE                                = 0x63,
    E_CHAR_NAME_CONSECUTIVE_SPACES                           = 0x64,
    E_CHAR_NAME_RUSSIAN_CONSECUTIVE_SILENT_CHARACTERS        = 0x65,
    E_CHAR_NAME_RUSSIAN_SILENT_CHARACTER_AT_BEGINNING_OR_END = 0x66,
    E_CHAR_NAME_DECLENSION_DOESNT_MATCH_BASE_NAME            = 0x67,
};

//These defines are for use with OutPacket
#define RESPONSE_SUCCESS "\x0"
#define RESPONSE_FAILURE "\x1"
#define RESPONSE_CANCELLED "\x2"
#define RESPONSE_DISCONNECTED "\x3"
#define RESPONSE_FAILED_TO_CONNECT "\x4"
#define RESPONSE_CONNECTED "\x05"
#define RESPONSE_VERSION_MISMATCH "\x6"

#define CSTATUS_CONNECTING "\x7"
#define CSTATUS_NEGOTIATING_SECURITY "\x8"
#define CSTATUS_NEGOTIATION_COMPLETE "\x9"
#define CSTATUS_NEGOTIATION_FAILED "\xA"
#define CSTATUS_AUTHENTICATING "\xB"

#define AUTH_OK "\xC"
#define AUTH_FAILED "\xD"
#define AUTH_REJECT "\xE"
#define AUTH_BAD_SERVER_PROOF "\xF"
#define AUTH_UNAVAILABLE "\x10"
#define AUTH_SYSTEM_ERROR "\x11"
#define AUTH_BILLING_ERROR "\x12"
#define AUTH_BILLING_EXPIRED "\x13"
#define AUTH_VERSION_MISMATCH "\x14"
#define AUTH_UNKNOWN_ACCOUNT "\x15"
#define AUTH_INCORRECT_PASSWORD "\x16"
#define AUTH_SESSION_EXPIRED "\x17"
#define AUTH_SERVER_SHUTTING_DOWN "\x18"
#define AUTH_ALREADY_LOGGING_IN "\x19"
#define AUTH_LOGIN_SERVER_NOT_FOUND "\x1A"
#define AUTH_WAIT_QUEUE "\x1B"
#define AUTH_BANNED "\x1C"
#define AUTH_ALREADY_ONLINE "\x1D"
#define AUTH_NO_TIME "\x1E"
#define AUTH_DB_BUSY "\x1F"
#define AUTH_SUSPENDED "\x20"
#define AUTH_PARENTAL_CONTROL "\x21"
#define AUTH_LOCKED_ENFORCED "\x22"

#define REALM_LIST_IN_PROGRESS "\x23"
#define REALM_LIST_SUCCESS "\x24"
#define REALM_LIST_FAILED "\x25"
#define REALM_LIST_INVALID "\x26"
#define REALM_LIST_REALM_NOT_FOUND "\x27"

#define ACCOUNT_CREATE_IN_PROGRESS "\x28"
#define ACCOUNT_CREATE_SUCCESS "\x29"
#define ACCOUNT_CREATE_FAILED "\x2A"

#define CHAR_LIST_RETRIEVING "\x2B"
#define CHAR_LIST_RETRIEVED "\x2C"
#define CHAR_LIST_FAILED "\x2D"

#define CHAR_CREATE_IN_PROGRESS "\x2E"
#define CHAR_CREATE_SUCCESS "\x2F"
#define CHAR_CREATE_ERROR "\x30"
#define CHAR_CREATE_FAILED "\x31"
#define CHAR_CREATE_NAME_IN_USE "\x32"
#define CHAR_CREATE_DISABLED "\x33"
#define CHAR_CREATE_PVP_TEAMS_VIOLATION "\x34"
#define CHAR_CREATE_SERVER_LIMIT "\x35"
#define CHAR_CREATE_ACCOUNT_LIMIT "\x36"
#define CHAR_CREATE_SERVER_QUEUE "\x37"
#define CHAR_CREATE_ONLY_EXISTING "\x38"
#define CHAR_CREATE_EXPANSION "\x39"
#define CHAR_CREATE_EXPANSION_CLASS "\x3A"
#define CHAR_CREATE_LEVEL_REQUIREMENT "\x3B"
#define CHAR_CREATE_UNIQUE_CLASS_LIMIT "\x3C"
#define CHAR_CREATE_CHARACTER_IN_GUILD "\x3D"
#define CHAR_CREATE_RESTRICTED_RACECLASS "\x3E"
#define CHAR_CREATE_CHARACTER_CHOOSE_RACE "\x3F"
#define CHAR_CREATE_CHARACTER_ARENA_LEADER "\x40"
#define CHAR_CREATE_CHARACTER_DELETE_MAIL "\x41"
#define CHAR_CREATE_CHARACTER_SWAP_FACTION "\x42"
#define CHAR_CREATE_CHARACTER_RACE_ONLY "\x43"
#define CHAR_CREATE_CHARACTER_GOLD_LIMIT "\x44"
#define CHAR_CREATE_FORCE_LOGIN "\x45"

#define CHAR_DELETE_IN_PROGRESS "\x46"
#define CHAR_DELETE_SUCCESS "\x47"
#define CHAR_DELETE_FAILED "\x48"
#define CHAR_DELETE_FAILED_LOCKED_FOR_TRANSFER "\x49"
#define CHAR_DELETE_FAILED_GUILD_LEADER "\x4A"
#define CHAR_DELETE_FAILED_ARENA_CAPTAIN "\x4B"

#define CHAR_LOGIN_IN_PROGRESS "\x4C"
#define CHAR_LOGIN_SUCCESS "\x4D"
#define CHAR_LOGIN_NO_WORLD "\x4E"
#define CHAR_LOGIN_DUPLICATE_CHARACTER "\x4F"
#define CHAR_LOGIN_NO_INSTANCES "\x50"
#define CHAR_LOGIN_FAILED "\x51"
#define CHAR_LOGIN_DISABLED "\x52"
#define CHAR_LOGIN_NO_CHARACTER "\x53"
#define CHAR_LOGIN_LOCKED_FOR_TRANSFER "\x54"
#define CHAR_LOGIN_LOCKED_BY_BILLING "\x55"
#define CHAR_LOGIN_LOCKED_BY_MOBILE_AH "\x56"

#define CHAR_NAME_SUCCESS "\x57"
#define CHAR_NAME_FAILURE "\x58"
#define CHAR_NAME_NO_NAME "\x59"
#define CHAR_NAME_TOO_SHORT "\x5A"
#define CHAR_NAME_TOO_LONG "\x5B"
#define CHAR_NAME_INVALID_CHARACTER "\x5C"
#define CHAR_NAME_MIXED_LANGUAGES "\x5D"
#define CHAR_NAME_PROFANE "\x5E"
#define CHAR_NAME_RESERVED "\x5F"
#define CHAR_NAME_INVALID_APOSTROPHE "\x60"
#define CHAR_NAME_MULTIPLE_APOSTROPHES "\x61"
#define CHAR_NAME_THREE_CONSECUTIVE "\x62"
#define CHAR_NAME_INVALID_SPACE "\x63"
#define CHAR_NAME_CONSECUTIVE_SPACES "\x64"
#define CHAR_NAME_RUSSIAN_CONSECUTIVE_SILENT_CHARACTERS "\x65"
#define CHAR_NAME_RUSSIAN_SILENT_CHARACTER_AT_BEGINNING_OR_END "\x66"
#define CHAR_NAME_DECLENSION_DOESNT_MATCH_BASE_NAME "\x67"


#endif      //_AUTHCODES_H
