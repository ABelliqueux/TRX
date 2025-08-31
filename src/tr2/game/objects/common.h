#pragma once

#include "global/types.h"

//~ #include <libtrx/game/objects/common.h>

void Object_Collision(int16_t item_num, ITEM *lara_item, COLL_INFO *coll);
void Object_Collision_Trap(int16_t item_num, ITEM *lara_item, COLL_INFO *coll);

void Object_DrawSpriteItem(const ITEM *item);

void Object_DrawAnimatingItem(const ITEM *item);
BOUNDS_16 Object_GetBoundingBox(
    const OBJECT *obj, const ANIM_FRAME *frame, uint32_t mesh_bits);
void Object_DrawMesh(int32_t mesh_idx, CLIP clip, bool interpolated);
void Object_SetMeshReflective(
    GAME_OBJECT_ID obj_id, int32_t mesh_idx, bool enabled);