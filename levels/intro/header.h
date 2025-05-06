#ifndef INTRO_HEADER_H
#define INTRO_HEADER_H

#include "types.h"

// geo
extern const GeoLayout intro_geo_splash_screen[];
extern const GeoLayout intro_geo_mario_head_regular[];
extern const GeoLayout intro_geo_mario_head_dizzy[];
extern const GeoLayout intro_geo_debug_level_select[];

// leveldata
extern Lights1 senzawa64intro_f3dlite_material_001_lights;
extern Lights1 senzawa64intro_f3dlite_material_002_lights;
extern Lights1 senzawa64intro_f3dlite_material_003_lights;
extern Lights1 senzawa64intro_f3dlite_material_004_lights;
extern Lights1 senzawa64intro_f3dlite_material_005_lights;
extern Lights1 senzawa64intro_f3dlite_material_lights;
extern u8 senzawa64intro_logo_brown_ci8[];
extern u8 senzawa64intro_logo_brown_pal_rgba16[];
extern Vtx senzawa64intro_Logo_mesh_vtx_0[385];
extern Gfx senzawa64intro_Logo_mesh_tri_0[];
extern Vtx senzawa64intro_Logo_mesh_vtx_1[381];
extern Gfx senzawa64intro_Logo_mesh_tri_1[];
extern Vtx senzawa64intro_Logo_mesh_vtx_2[642];
extern Gfx senzawa64intro_Logo_mesh_tri_2[];
extern Vtx senzawa64intro_Logo_mesh_vtx_3[304];
extern Gfx senzawa64intro_Logo_mesh_tri_3[];
extern Vtx senzawa64intro_Logo_mesh_vtx_4[1524];
extern Gfx senzawa64intro_Logo_mesh_tri_4[];
extern Vtx senzawa64intro_Logo_mesh_vtx_5[282];
extern Gfx senzawa64intro_Logo_mesh_tri_5[];
extern Gfx mat_senzawa64intro_f3dlite_material_001[];
extern Gfx mat_senzawa64intro_f3dlite_material_002[];
extern Gfx mat_senzawa64intro_f3dlite_material_003[];
extern Gfx mat_senzawa64intro_f3dlite_material_004[];
extern Gfx mat_senzawa64intro_f3dlite_material_005[];
extern Gfx mat_revert_senzawa64intro_f3dlite_material_005[];
extern Gfx mat_senzawa64intro_f3dlite_material[];
extern Gfx senzawa64intro_Logo_mesh[];

extern const Gfx intro_seg7_dl_copyright_trademark[];
extern const f32 intro_seg7_table_scale_1[];
extern const f32 intro_seg7_table_scale_2[];

// script
extern const LevelScript level_intro_splash_screen[];
extern const LevelScript level_intro_mario_head_regular[];
extern const LevelScript level_intro_mario_head_dizzy[];
extern const LevelScript level_intro_entry_level_select[];
extern const LevelScript script_intro_file_select[];
extern const LevelScript script_intro_level_select[];
extern const LevelScript script_intro_main_level_entry_stop_music[];
extern const LevelScript script_intro_main_level_entry[];
extern const LevelScript script_intro_splash_screen[];

#endif
