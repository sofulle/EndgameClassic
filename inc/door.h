// hoor.h
#ifndef DOOR_H
#define DOOR_H

#include "common.h"
#include "entity.h"

t_entity *door_add(t_game *game, t_tile otile, t_tile ctile, int x, int y, bool is_locked, t_item required_item);
void door_logic(t_game *game, t_entity *door);
void door_draw(t_game *game, t_entity *door);
void door_free(t_entity *door);

#endif