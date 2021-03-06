/*
Copyright (c) 2016 AscEmu Team <http://www.ascemu.org/>
This file is released under the MIT license. See README-MIT for more information.
*/

#ifndef _MOVEMENT_SPLINEFLAGS_HPP
#define _MOVEMENT_SPLINEFLAGS_HPP

#include "StdAfx.h"
#include "MovementSplineDefines.hpp"
#include "G3D/Vector3.h"

namespace Movement
{
    namespace Spline
    {
#pragma pack(push, 1)
        struct SplineFlagsData
        {
            uint8 animation_id : 8; // 8
            bool done : 1;
            bool falling : 1;
            bool no_spline : 1;
            bool trajectory : 1; // 12
            bool walkmode : 1;
            bool flying : 1;
            bool knockback : 1;
            bool finalpoint : 1; // 16
            bool finaltarget : 1;
            bool finalangle : 1;
            bool catmullrom : 1;
            bool cyclic : 1; // 20
            bool enter_cycle : 1;
            bool animation : 1;
            bool frozen : 1;
            bool enter_transport : 1; // 24
            bool exit_transport : 1;
            bool unk1 : 1;
            bool unk2 : 1;
            bool invert_orientation : 1; // 28
            bool unk3 : 1;
            bool unk4 : 1;
            bool unk5 : 1;
            bool unk6 : 1; // 32

            inline uint32& as_uint32() { return (uint32&)*this; }
        };
#pragma pack(pop)

        struct SplineFlags
        {
            protected:

                void UnsetAllFacingFlags();

            public:

                SplineFlagsData m_splineFlagsRaw;
                uint32 GetFlagsForMonsterMove();
                void SetFacingPointFlag();
                void SetFacingTargetFlag();
                void SetFacingAngleFlag();
        };
    }
}

#endif // _MOVEMENT_SPLINEFLAGS_HPP
