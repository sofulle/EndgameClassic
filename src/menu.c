//menu.c

#include "menu_main.h"

void menu_main_init(t_game *game) {
    game->control.start = 0;
    game->death_timer = 0;
    game->main_menu_texture = IMG_LoadTexture(game->renderer, "resource/sprites/menu_background.jpg");
}

void menu_main_draw(t_game *game) {
    SDL_Rect rect;
    rect.x = 0;
    rect.y = 0;
    rect.w = SCREEN_WIDTH;
    rect.h = SCREEN_HEIGHT / 3;

    if (game->control.start == 0) {
        blit(game, game->main_menu_texture, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 1.75, ANCHOR_CENTER_CENTER);
        SDL_SetRenderDrawColor(game->renderer, 0, 0, 0, 0);
        SDL_RenderFillRect(game->renderer, &rect);

        rect.y = SCREEN_HEIGHT / 1.5;
        rect.w = SCREEN_WIDTH;
        rect.h = SCREEN_HEIGHT;

        SDL_RenderFillRect(game->renderer, &rect);

        text_draw(game, "ENDGAME", SCREEN_WIDTH / 2,  SCREEN_HEIGHT / 2 - 150, 144, ANCHOR_BOTTOM_CENTER);
        text_draw(game, "Press [Enter] start the story", SCREEN_WIDTH / 2, SCREEN_HEIGHT - 190, 24, ANCHOR_BOTTOM_CENTER);

        text_draw(game, "Cop & Past Games", 10, 10, 18, ANCHOR_TOP_LEFT);
        text_draw(game, "classic-0.2", SCREEN_WIDTH - 10, 10, 18, ANCHOR_TOP_RIGHT);

        rect.y = 0;
        rect.w = SCREEN_WIDTH;
        rect.h = SCREEN_HEIGHT;
    }
    else {
        if (game->death_timer == 0 && game->control.start) game->death_timer = SDL_GetTicks();

        if (SDL_GetTicks() < game->death_timer + 3000 && game->control.start) {
            SDL_SetRenderDrawColor(game->renderer, 0, 0, 0, 0);
            SDL_RenderFillRect(game->renderer, &rect);
            text_draw(game, "Loading...", SCREEN_WIDTH - 20, SCREEN_HEIGHT - 20, 24, ANCHOR_BOTTOM_RIGHT);
        }

        if (SDL_GetTicks() > game->death_timer + 3000) {
            Mix_PauseMusic();
            music_play(game, SND_LEVEL2_MUSIC);
            game->death_timer = 0;
            game->is_started = true;
        }
    }
    
    
    

    
}

// void menu_loading_to_game(t_game *game) {
//     SDL_Rect rect;
//     rect.x = 0;
//     rect.y = 0;
//     rect.w = SCREEN_WIDTH;z
//     rect.h = SCREEN_HEIGHT;


    
// }
