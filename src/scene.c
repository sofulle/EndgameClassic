// scene.c

#include "scene.h"

void scene_init(t_game *game) {
	player_init(game, 17 * (TILE_SIZE * TILE_SCALE), 1 * (TILE_SIZE * TILE_SCALE));
	door_add(game, set_tile(10, 0), set_tile(9, 0), 17, 10, true, ITEM_NOTSET);
	door_add(game, set_tile(12, 5), set_tile(11, 5), 19, 15, true, ITEM_KEY);

	item_add(game, set_tile(2, 3), 23, 14, ITEM_PAINT, true);
	item_add(game, set_tile(3, 3), 9, 3, ITEM_KEY, true);

	map_init(game, "assets/maps/map.csv");

	tileset_init(game, "assets/sprites/tileset.png");
}

void scene_prepare(t_game* game) {
	SDL_SetRenderDrawColor(game->renderer, 0, 0, 0, 0);
	SDL_RenderClear(game->renderer);
}

void scene_draw(t_game* game) {
	map_draw(game);
	entity_draw(game);
	map_draw_front(game);
}

void scene_present(t_game* game) {
	SDL_RenderPresent(game->renderer);
}

void scene_logic(t_game* game) {
	entity_logic(game);
}

void scene_free(t_game* game) {
	entity_free(game);
	tileset_free(game);
}
