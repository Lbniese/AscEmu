/*
Copyright (c) 2015 AscEmu Team <http://www.ascemu.org/>
This file is released under the MIT license. See README-MIT for more information.
*/

#pragma once
#include <exception>

namespace AscEmu
{
    namespace Exception
    {
        class AscemuException : public std::exception
        {
        protected:
            const std::string m_exceptionString;

        public:
            const char* what() { return m_exceptionString.c_str(); }
            explicit AscemuException() : exception(), m_exceptionString("An unspecified exception has occurred in AscEmu") { }
            explicit AscemuException(const char* exceptionString) : exception(), m_exceptionString(exceptionString) { }
        };
    }
}