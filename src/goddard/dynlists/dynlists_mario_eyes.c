// MODIFIED BY A BLENDER ADDON //
#include <PR/ultratypes.h>

#include "dynlist_macros.h"
#include "dynlists.h"
#include "../dynlist_proc.h"

#define VTX_NUM 48 
/* @ 04003610 */
static s16 verts_mario_eye_right[VTX_NUM][3] = {{306, 26, 82}, {317, 17, 81}, {311, -13, 93}, {307, 43, 52}, {320, 34, 49}, {307, 46, 11}, {320, 38, 8}, {316, 31, -29}, {303, 38, -26}, {310, 10, -57}, {299, 18, -55}, {303, -20, -65}, {286, -46, -50}, {299, -53, -52}, {285, -63, -20}, {296, -71, -23}, {286, -69, 20}, {299, -75, 17}, {300, -68, 57}, {289, -59, 59}, {304, -46, 85}, {293, -40, 87}, {314, -34, 13}, {316, -32, 20}, {317, -28, 24}, {293, -14, -63}, {316, -17, 67}, {311, -37, 61}, {310, -49, 43}, {307, -52, -14}, {307, -41, -32}, {310, -21, -40}, {314, -1, -35}, {318, 10, -17}, {321, 13, 38}, {320, 1, 58}, {317, -20, 28}, {307, -57, 14}, {314, -34, 3}, {314, -29, 0}, {316, -21, -3}, {317, -14, 0}, {318, -8, 1}, {321, 15, 10}, {320, -7, 20}, {318, -13, 23}, {320, -7, 10}, {300, -5, 95}};

/* @ 04003730 */
static struct GdVtxData vtx_mario_eye_right = { VTX_NUM, 0x1, verts_mario_eye_right };
#undef VTX_NUM

#define FACE_NUM 82 
/* @ 0400373C */
static u16 facedata_mario_eye_right[FACE_NUM][4] = {{1, 2, 1, 0}, {1, 1, 4, 3}, {1, 4, 6, 5}, {1, 6, 7, 5}, {1, 7, 9, 8}, {1, 9, 11, 10}, {1, 11, 13, 12}, {1, 13, 15, 14}, {1, 15, 17, 16}, {1, 17, 18, 16}, {1, 18, 20, 19}, {1, 20, 2, 21}, {1, 0, 47, 2}, {1, 2, 26, 1}, {1, 20, 26, 2}, {1, 18, 27, 20}, {1, 17, 28, 18}, {1, 15, 29, 17}, {1, 13, 30, 15}, {1, 11, 31, 13}, {1, 9, 31, 11}, {1, 7, 32, 9}, {1, 6, 33, 7}, {1, 4, 34, 6}, {1, 1, 35, 4}, {1, 35, 34, 4}, {1, 34, 43, 6}, {1, 6, 43, 33}, {1, 7, 33, 32}, {1, 9, 32, 31}, {1, 31, 30, 13}, {1, 30, 29, 15}, {1, 29, 37, 17}, {1, 17, 37, 28}, {1, 18, 28, 27}, {1, 20, 27, 26}, {1, 26, 35, 1}, {1, 3, 0, 1}, {1, 5, 3, 4}, {1, 7, 8, 5}, {1, 9, 10, 8}, {1, 11, 25, 10}, {1, 12, 25, 11}, {1, 14, 12, 13}, {1, 16, 14, 15}, {1, 18, 19, 16}, {1, 2, 47, 21}, {1, 20, 21, 19}, {2, 26, 36, 35}, {2, 27, 36, 26}, {2, 28, 24, 27}, {2, 37, 23, 28}, {2, 29, 38, 37}, {2, 30, 39, 29}, {2, 31, 40, 30}, {2, 32, 40, 31}, {2, 33, 41, 32}, {2, 43, 42, 33}, {2, 34, 44, 43}, {2, 35, 45, 34}, {2, 45, 44, 34}, {2, 44, 46, 43}, {2, 43, 46, 42}, {2, 33, 42, 41}, {2, 32, 41, 40}, {2, 40, 39, 30}, {2, 39, 38, 29}, {2, 38, 22, 37}, {2, 37, 22, 23}, {2, 28, 23, 24}, {2, 27, 24, 36}, {2, 36, 45, 35}, {3, 24, 23, 22}, {3, 22, 36, 24}, {3, 22, 38, 36}, {3, 38, 39, 36}, {3, 39, 40, 36}, {3, 40, 41, 36}, {3, 41, 45, 36}, {3, 41, 42, 45}, {3, 42, 46, 45}, {3, 46, 44, 45}};

/* @ 040039CC */
static struct GdFaceData faces_mario_eye_right = { FACE_NUM, 0x1, facedata_mario_eye_right };
#undef FACE_NUM

/* @ 040039D8 */
struct DynList dynlist_mario_eye_right[28] = {
    StartList(),
    MakeDynObj(D_DATA_GRP, 0x71),
    LinkWithPtr(&vtx_mario_eye_right),
    MakeDynObj(D_DATA_GRP, 0x72),
    LinkWithPtr(&faces_mario_eye_right),
    StartGroup(0x73),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(0),
    SetAmbient(0.0, 0.29100000858306885, 1.0),
    SetDiffuse(0.0, 0.29100000858306885, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(1),
    SetAmbient(0.0, 0.5759999752044678, 1.0),
    SetDiffuse(0.0, 0.5759999752044678, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(2),
    SetAmbient(0.0, 0.0, 0.0),
    SetDiffuse(0.0, 0.0, 0.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(3),
    SetAmbient(1.0, 1.0, 1.0),
    SetDiffuse(1.0, 1.0, 1.0),
    EndGroup(0x73),
    MakeDynObj(D_SHAPE, 0x74),
    SetNodeGroup(0x71),
    SetPlaneGroup(0x72),
    SetMaterialGroup(0x73),
    StopList(),
};

















































#define VTX_NUM 48 
/* @ 04003C78 */
static s16 verts_mario_eye_left[VTX_NUM][3] = {{302, 34, -81}, {316, 28, -79}, {310, -1, -97}, {303, 47, -47}, {317, 40, -46}, {302, 46, -7}, {316, 37, -5}, {310, 23, 31}, {296, 31, 29}, {304, 0, 56}, {290, 7, 55}, {297, -34, 59}, {279, -57, 40}, {293, -63, 41}, {279, -69, 7}, {293, -77, 8}, {282, -68, -32}, {296, -75, -31}, {300, -62, -69}, {286, -53, -70}, {304, -37, -93}, {290, -28, -95}, {313, -34, -20}, {314, -31, -28}, {316, -26, -31}, {285, -26, 57}, {316, -8, -70}, {311, -29, -69}, {310, -46, -52}, {304, -57, 2}, {304, -49, 23}, {307, -29, 34}, {310, -10, 32}, {316, 3, 17}, {320, 15, -38}, {318, 7, -59}, {317, -17, -34}, {307, -56, -24}, {313, -34, -10}, {313, -31, -5}, {314, -24, 0}, {316, -17, -2}, {317, -10, -5}, {320, 14, -8}, {318, -7, -23}, {318, -10, -28}, {318, -7, -14}, {296, 5, -99}};

/* @ 04003D98 */
static struct GdVtxData vtx_mario_eye_left = { VTX_NUM, 0x1, verts_mario_eye_left };
#undef VTX_NUM

#define FACE_NUM 82 
/* @ 04003DA4 */
static u16 facedata_mario_eye_left[FACE_NUM][4] = {{1, 0, 1, 2}, {1, 3, 4, 1}, {1, 5, 6, 4}, {1, 5, 7, 6}, {1, 8, 9, 7}, {1, 10, 11, 9}, {1, 12, 13, 11}, {1, 14, 15, 13}, {1, 16, 17, 15}, {1, 16, 18, 17}, {1, 19, 20, 18}, {1, 21, 2, 20}, {1, 2, 47, 0}, {1, 1, 26, 2}, {1, 2, 26, 20}, {1, 20, 27, 18}, {1, 18, 28, 17}, {1, 17, 29, 15}, {1, 15, 30, 13}, {1, 13, 31, 11}, {1, 11, 31, 9}, {1, 9, 32, 7}, {1, 7, 33, 6}, {1, 6, 34, 4}, {1, 4, 35, 1}, {1, 4, 34, 35}, {1, 6, 43, 34}, {1, 33, 43, 6}, {1, 32, 33, 7}, {1, 31, 32, 9}, {1, 13, 30, 31}, {1, 15, 29, 30}, {1, 17, 37, 29}, {1, 28, 37, 17}, {1, 27, 28, 18}, {1, 26, 27, 20}, {1, 1, 35, 26}, {1, 1, 0, 3}, {1, 4, 3, 5}, {1, 5, 8, 7}, {1, 8, 10, 9}, {1, 10, 25, 11}, {1, 11, 25, 12}, {1, 13, 12, 14}, {1, 15, 14, 16}, {1, 16, 19, 18}, {1, 21, 47, 2}, {1, 19, 21, 20}, {2, 35, 36, 26}, {2, 26, 36, 27}, {2, 27, 24, 28}, {2, 28, 23, 37}, {2, 37, 38, 29}, {2, 29, 39, 30}, {2, 30, 40, 31}, {2, 31, 40, 32}, {2, 32, 41, 33}, {2, 33, 42, 43}, {2, 43, 44, 34}, {2, 34, 45, 35}, {2, 34, 44, 45}, {2, 43, 46, 44}, {2, 42, 46, 43}, {2, 41, 42, 33}, {2, 40, 41, 32}, {2, 30, 39, 40}, {2, 29, 38, 39}, {2, 37, 22, 38}, {2, 23, 22, 37}, {2, 24, 23, 28}, {2, 36, 24, 27}, {2, 35, 45, 36}, {3, 22, 23, 24}, {3, 24, 36, 22}, {3, 36, 38, 22}, {3, 36, 39, 38}, {3, 36, 40, 39}, {3, 36, 41, 40}, {3, 36, 45, 41}, {3, 45, 42, 41}, {3, 45, 46, 42}, {3, 45, 44, 46}};

/* @ 04004034 */
static struct GdFaceData faces_mario_eye_left = { FACE_NUM, 0x1, facedata_mario_eye_left };
#undef FACE_NUM

/* @ 04004040 */
struct DynList dynlist_mario_eye_left[28] = {
    StartList(),
    MakeDynObj(D_DATA_GRP, 0x61),
    LinkWithPtr(&vtx_mario_eye_left),
    MakeDynObj(D_DATA_GRP, 0x62),
    LinkWithPtr(&faces_mario_eye_left),
    StartGroup(0x63),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(0),
    SetAmbient(0.0, 0.29100000858306885, 1.0),
    SetDiffuse(0.0, 0.29100000858306885, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(1),
    SetAmbient(0.0, 0.5759999752044678, 1.0),
    SetDiffuse(0.0, 0.5759999752044678, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(2),
    SetAmbient(0.0, 0.0, 0.0),
    SetDiffuse(0.0, 0.0, 0.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(3),
    SetAmbient(1.0, 1.0, 1.0),
    SetDiffuse(1.0, 1.0, 1.0),
    EndGroup(0x63),
    MakeDynObj(D_SHAPE, 0x64),
    SetNodeGroup(0x61),
    SetPlaneGroup(0x62),
    SetMaterialGroup(0x63),
    StopList(),
};
