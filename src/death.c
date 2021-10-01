#include "death.h"

void death_init(t_game *game) {
    SDL_Point *spawn = (SDL_Point *) malloc(sizeof(SDL_Point));
    memset(spawn, 0, sizeof(SDL_Point));

    spawn->x = 0;
    spawn->y = 0;
    game->spawn = spawn;
    game->death_timer = 0;
}

void death_logic(t_game *game) {

    if (game->player->is_death) {
        game->game_over_screen = false;
        game->control.down = 0;
        game->control.up = 0;
        game->control.left = 0;
        game->control.right = 0;

        if (game->death_timer == 0) game->death_timer = SDL_GetTicks();

        if (SDL_GetTicks() > game->death_timer + 3000) {
            game->player->x = 0;
            game->player->y = 0;
            game->game_over_screen = true;
        }
    }
    else {
        game->death_timer = SDL_GetTicks();
    }
    
}

void death_draw(t_game *game, char *filename) {
    SDL_Texture *texture;
    texture = IMG_LoadTexture(game->renderer, filename);

    SDL_Rect rect;
    rect.x = 0;
    rect.y = 0;
    rect.w = SCREEN_WIDTH;
    rect.h = SCREEN_HEIGHT;
    if (game->player->is_death && SDL_GetTicks() > game->death_timer + 3000) {
        SDL_SetRenderDrawColor(game->renderer, 0, 0, 0, 0);
        SDL_RenderFillRect(game->renderer, &rect);

        blit(game, texture, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
    }
}

void death_free(t_game *game) {
    free(game->spawn);
	game->spawn = NULL;
}