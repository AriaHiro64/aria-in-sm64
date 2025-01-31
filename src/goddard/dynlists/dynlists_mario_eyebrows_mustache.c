// MODIFIED BY A BLENDER ADDON //
#include <PR/ultratypes.h>

#include "dynlist_macros.h"
#include "dynlists.h"
#include "../dynlist_proc.h"

#define VTX_NUM 26 
/* @ 040042E0 */
s16 verts_mario_eyebrow_right[VTX_NUM][3] = {{111, 374, 425}, {69, 330, 434}, {96, 332, 433}, {192, 403, 389}, {147, 384, 412}, {209, 373, 379}, {214, 381, 341}, {188, 384, 356}, {219, 422, 337}, {135, 354, 388}, {166, 421, 364}, {247, 402, 323}, {245, 367, 332}, {126, 414, 381}, {88, 399, 394}, {84, 314, 405}, {66, 295, 407}, {52, 269, 407}, {44, 346, 404}, {233, 399, 361}, {238, 375, 358}, {144, 402, 411}, {70, 305, 423}, {248, 408, 349}, {62, 381, 405}, {56, 309, 422}};

/* @ 0400437C */
struct GdVtxData vtx_mario_eyebrow_right = { VTX_NUM, 0x1, verts_mario_eyebrow_right };
#undef VTX_NUM

#define FACE_NUM 36 
/* @ 04004388 */
u16 facedata_mario_eyebrow_right[FACE_NUM][4] = {{0, 0, 1, 2}, {0, 3, 4, 5}, {0, 20, 23, 19}, {0, 1, 25, 22}, {0, 0, 21, 13}, {0, 2, 15, 9}, {0, 7, 6, 20}, {0, 3, 19, 8}, {0, 25, 1, 24}, {0, 19, 5, 20}, {0, 19, 3, 5}, {0, 3, 21, 4}, {0, 21, 0, 4}, {0, 0, 2, 4}, {0, 1, 22, 2}, {0, 20, 12, 23}, {0, 13, 14, 0}, {0, 4, 2, 9}, {0, 20, 5, 7}, {0, 22, 17, 16}, {0, 8, 10, 3}, {0, 24, 18, 25}, {0, 23, 11, 8}, {0, 14, 24, 1}, {0, 5, 4, 9}, {0, 2, 22, 15}, {0, 11, 23, 12}, {0, 25, 18, 17}, {0, 20, 6, 12}, {0, 10, 13, 21}, {0, 8, 19, 23}, {0, 25, 17, 22}, {0, 1, 0, 14}, {0, 21, 3, 10}, {0, 22, 16, 15}, {0, 9, 7, 5}};

/* @ 040044A8 */
struct GdFaceData faces_mario_eyebrow_right = { FACE_NUM, 0x1, facedata_mario_eyebrow_right };
#undef FACE_NUM

/* @ 040044B4 */
struct DynList dynlist_mario_eyebrow_right[16] = {
    StartList(),
    MakeDynObj(D_DATA_GRP, 0x5A),
    LinkWithPtr(&vtx_mario_eyebrow_right),
    MakeDynObj(D_DATA_GRP, 0x5B),
    LinkWithPtr(&faces_mario_eyebrow_right),
    StartGroup(0x5C),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(0),
    SetAmbient(0.5596007704734802, 0.0, 0.0),
    SetDiffuse(0.5596007704734802, 0.0, 0.0),
    EndGroup(0x5C),
    MakeDynObj(D_SHAPE, 0x5D),
    SetNodeGroup(0x5A),
    SetPlaneGroup(0x5B),
    SetMaterialGroup(0x5C),
    StopList(),
};





























































































#define VTX_NUM 26 
/* @ 04004634 */
s16 verts_mario_eyebrow_left[VTX_NUM][3] = {{-78, 313, 434}, {-52, 269, 407}, {-58, 311, 433}, {-65, 294, 409}, {-86, 320, 405}, {-59, 372, 403}, {-148, 395, 411}, {-129, 415, 381}, {-169, 420, 364}, {-253, 367, 329}, {-224, 382, 341}, {-238, 368, 362}, {-52, 351, 402}, {-250, 408, 349}, {-250, 402, 321}, {-99, 334, 434}, {-139, 348, 389}, {-152, 376, 412}, {-212, 371, 380}, {-71, 332, 434}, {-91, 400, 394}, {-223, 423, 336}, {-200, 403, 389}, {-191, 382, 357}, {-115, 364, 425}, {-232, 404, 361}};

/* @ 040046D0 */
struct GdVtxData vtx_mario_eyebrow_left = { VTX_NUM, 0x1, verts_mario_eyebrow_left };
#undef VTX_NUM

#define FACE_NUM 36 
/* @ 040046DC */
u16 facedata_mario_eyebrow_left[FACE_NUM][4] = {{0, 0, 1, 2}, {0, 8, 22, 6}, {0, 6, 7, 8}, {0, 9, 10, 11}, {0, 1, 12, 2}, {0, 9, 13, 14}, {0, 4, 0, 15}, {0, 16, 17, 18}, {0, 19, 5, 20}, {0, 21, 14, 13}, {0, 2, 12, 5}, {0, 22, 8, 21}, {0, 3, 1, 0}, {0, 23, 18, 11}, {0, 16, 15, 17}, {0, 24, 20, 7}, {0, 13, 9, 11}, {0, 15, 0, 19}, {0, 17, 15, 24}, {0, 17, 24, 6}, {0, 17, 6, 22}, {0, 18, 22, 25}, {0, 11, 18, 25}, {0, 4, 3, 0}, {0, 18, 23, 16}, {0, 20, 24, 19}, {0, 13, 25, 21}, {0, 5, 19, 2}, {0, 21, 25, 22}, {0, 11, 10, 23}, {0, 18, 17, 22}, {0, 15, 19, 24}, {0, 16, 4, 15}, {0, 7, 6, 24}, {0, 0, 2, 19}, {0, 25, 13, 11}};

/* @ 040047FC */
struct GdFaceData faces_mario_eyebrow_left = { FACE_NUM, 0x1, facedata_mario_eyebrow_left };
#undef FACE_NUM

/* @ 04004808 */
struct DynList dynlist_mario_eyebrow_left[16] = {
    StartList(),
    MakeDynObj(D_DATA_GRP, 0x38),
    LinkWithPtr(&vtx_mario_eyebrow_left),
    MakeDynObj(D_DATA_GRP, 0x39),
    LinkWithPtr(&faces_mario_eyebrow_left),
    StartGroup(0x3A),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(0),
    SetAmbient(0.5596007704734802, 0.0, 0.0),
    SetDiffuse(0.5596007704734802, 0.0, 0.0),
    EndGroup(0x3A),
    MakeDynObj(D_SHAPE, 0x3B),
    SetNodeGroup(0x38),
    SetPlaneGroup(0x39),
    SetMaterialGroup(0x3A),
    StopList(),
};





























































































#define VTX_NUM 56 
/* @ 04004988 */
s16 verts_mario_mustache[VTX_NUM][3] = {{0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}, {0, -78, 379}};

/* @ 04004AD8 */
struct GdVtxData vtx_mario_mustache = { VTX_NUM, 0x1, verts_mario_mustache };
#undef VTX_NUM

#define FACE_NUM 100 
/* @ 04004AE4 */
u16 facedata_mario_mustache[FACE_NUM][4] = {{0, 0, 1, 2}, {0, 3, 4, 5}, {0, 3, 5, 46}, {0, 6, 0, 7}, {0, 6, 7, 33}, {0, 8, 9, 10}, {0, 8, 10, 44}, {0, 11, 47, 12}, {0, 11, 12, 13}, {0, 14, 15, 16}, {0, 14, 16, 35}, {0, 2, 1, 48}, {0, 2, 48, 17}, {0, 18, 19, 20}, {0, 18, 20, 54}, {0, 21, 22, 31}, {0, 21, 31, 23}, {0, 24, 25, 27}, {0, 24, 27, 26}, {0, 27, 25, 21}, {0, 27, 21, 23}, {0, 0, 24, 26}, {0, 0, 26, 7}, {0, 28, 29, 30}, {0, 28, 30, 45}, {0, 31, 22, 18}, {0, 31, 18, 54}, {0, 32, 6, 33}, {0, 32, 33, 55}, {0, 16, 34, 49}, {0, 16, 49, 35}, {0, 36, 5, 4}, {0, 36, 4, 37}, {0, 38, 39, 52}, {0, 38, 52, 40}, {0, 41, 42, 51}, {0, 41, 51, 43}, {0, 10, 15, 14}, {0, 10, 14, 44}, {0, 37, 28, 45}, {0, 37, 45, 36}, {0, 35, 7, 26}, {0, 13, 3, 46}, {0, 13, 46, 11}, {0, 19, 12, 47}, {0, 19, 47, 20}, {0, 1, 32, 55}, {0, 1, 55, 48}, {0, 34, 2, 17}, {0, 34, 17, 49}, {0, 43, 38, 40}, {0, 43, 40, 41}, {0, 42, 53, 50}, {0, 42, 50, 51}, {0, 39, 9, 8}, {0, 39, 8, 52}, {0, 29, 50, 53}, {0, 29, 53, 30}, {0, 51, 50, 25}, {0, 43, 51, 25}, {0, 43, 25, 24}, {0, 29, 28, 25}, {0, 3, 13, 12}, {0, 3, 12, 21}, {0, 3, 21, 25}, {0, 50, 29, 25}, {0, 25, 37, 4}, {0, 25, 28, 37}, {0, 25, 4, 3}, {0, 9, 39, 24}, {0, 16, 15, 24}, {0, 39, 38, 24}, {0, 38, 43, 24}, {0, 10, 9, 24}, {0, 24, 0, 16}, {0, 15, 10, 24}, {0, 8, 44, 14}, {0, 18, 22, 21}, {0, 19, 18, 21}, {0, 12, 19, 21}, {0, 0, 6, 32}, {0, 0, 32, 1}, {0, 2, 34, 16}, {0, 2, 16, 0}, {0, 23, 11, 46}, {0, 8, 14, 35}, {0, 23, 31, 54}, {0, 46, 27, 23}, {0, 8, 35, 26}, {0, 27, 46, 45}, {0, 54, 20, 47}, {0, 54, 47, 11}, {0, 55, 33, 7}, {0, 7, 49, 55}, {0, 49, 17, 55}, {0, 17, 48, 55}, {0, 35, 49, 7}, {0, 54, 11, 23}, {0, 46, 5, 45}, {0, 5, 36, 45}};

/* @ 04004E04 */
struct GdFaceData faces_mario_mustache = { FACE_NUM, 0x1, facedata_mario_mustache };
#undef FACE_NUM

/* @ 04004E10 */
struct DynList dynlist_mario_mustache[16] = {
    StartList(),
    MakeDynObj(D_DATA_GRP, 0x16),
    LinkWithPtr(&vtx_mario_mustache),
    MakeDynObj(D_DATA_GRP, 0x17),
    LinkWithPtr(&faces_mario_mustache),
    StartGroup(0x18),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(0),
    SetAmbient(0.0, 0.0, 0.0),
    SetDiffuse(0.0, 0.0, 0.0),
    EndGroup(0x18),
    MakeDynObj(D_SHAPE, 0x19),
    SetNodeGroup(0x16),
    SetPlaneGroup(0x17),
    SetMaterialGroup(0x18),
    StopList(),
};
