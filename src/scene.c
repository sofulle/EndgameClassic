// scene.c

#include "scene.h"

void traps_init(t_game *game);

void scene_init(t_game *game) {
	player_init(game, 17, 113);
	door_add(game, "front_door", set_tile(10, 0), set_tile(9, 0), 17, 10, true, ITEM_NOTSET, false);

	// Level 00
	npc_add(game, "real_general", set_tile(1, 11), 14, 112, true);
	npc_add(game, "real_scientist", set_tile(0, 11), 7, 116, false);
	object_add(game, "chair_of_vr_main", set_tile(0, 14), set_tile(1, 14), 7, 118, false, ITEM_NOTSET, 1000, true);
	door_add(game, "locked_door", set_tile(10, 0), set_tile(9, 0), 17, 111, true, ITEM_NULL, false);

	message_add(entity_by_slag(game, "real_general"), "General Prokofiev", "Today you have a unique chance, you are one of the first cadets in our Internet battalion.", 0);
    message_add(entity_by_slag(game, "real_general"), "General Prokofiev", "You have the honor of serving the country and protecting its web borders.", 0);
    message_add(entity_by_slag(game, "real_general"), "General Prokofiev", "Thanks to people like you, our citizens will be able to sleep well.", 0);
	message_add(entity_by_slag(game, "real_general"), "General Prokofiev", "They will be assured that not one byte of enemy information will enter our network.", 0);
    message_add(entity_by_slag(game, "real_general"), "General Prokofiev", "Approach Professor Solovyov, he will tell you more about what to do.", 0);

	message_add(entity_by_slag(game, "real_scientist"), "Professor Solovyov", "Hello, I'm one of the people who developed this system that will protect our native network.", 0);
    message_add(entity_by_slag(game, "real_scientist"), "Professor Solovyov", "Using computer simulation, a virtual obstacle course...", 0);
    message_add(entity_by_slag(game, "real_scientist"), "Professor Solovyov", "... is an innovative development of which I am personally proud. The system is completely working...", 0);
    message_add(entity_by_slag(game, "real_scientist"), "Professor Solovyov", "...though not fully tested, but I'm sure it will greatly improve your skills of navigating the network.", 0);
    message_add(entity_by_slag(game, "real_scientist"), "Professor Solovyov", "Ignore the low-detail graphics and don't trust everything you see...", 0);
    message_add(entity_by_slag(game, "real_scientist"), "Professor Solovyov", "... it's all tricks of the enemy Special Forces who are interfering with our training.", 0);
    message_add(entity_by_slag(game, "real_scientist"), "Professor Solovyov", "Sit in that blue chair over there, put on your helmet and we'll get started.", 0);
    message_add(entity_by_slag(game, "real_scientist"), "Professor Solovyov", "Remember, you need to find General Prokofiev, but on the virtual network. He will give you further instructions.", 0);

	// Level 01
	npc_add(game, "virtual_general", set_tile(1, 11), 28, 35, false);
	npc_add(game, "virtual_guard", set_tile(4, 11), 18, 16, true);
	npc_add(game, "virtual_sarge", set_tile(5, 11), 10, 1, false);
	npc_add(game, "virtual_tumbleweed", set_tile(7, 12), 16, 7, true);
	object_add(game, "virtual_grass00", set_tile(3, 13), set_tile(4, 13), 2, 2, false, ITEM_PAINT, 1000, false);
	object_add(game, "virtual_grass01", set_tile(3, 13), set_tile(4, 13), 5, 7, false, ITEM_PAINT, 1000, false);
	object_add(game, "virtual_grass02", set_tile(3, 13), set_tile(4, 13), 9, 4, false, ITEM_PAINT, 1000, false);
	object_add(game, "virtual_grass03", set_tile(3, 13), set_tile(4, 13), 2, 5, false, ITEM_PAINT, 1000, false);
	object_add(game, "virtual_grass04", set_tile(3, 13), set_tile(4, 13), 5, 2, false, ITEM_PAINT, 1000, false);
	object_add(game, "virtual_potato00", set_tile(8, 14), set_tile(5, 0), 25, 12, false, ITEM_NOTSET, 1000, false);
	object_add(game, "virtual_potato01", set_tile(8, 14), set_tile(5, 0), 26, 14, false, ITEM_NOTSET, 1000, false);
	object_add(game, "virtual_potato02", set_tile(8, 14), set_tile(5, 0), 29, 13, false, ITEM_NOTSET, 1000, false);
	object_add(game, "portal0", set_tile(11, 0), set_tile(11, 0), 17, 0, false, ITEM_NOTSET, 1000, true);
	object_add(game, "portal1", set_tile(12, 0), set_tile(12, 0), 18, 0, false, ITEM_NOTSET, 1000, true);
	door_add(game, "mil_locked_door", set_tile(-1, -1), set_tile(-1, -1), 17, 16, true, ITEM_NULL, true);
    item_add(game, set_tile(2, 13), 10, 25, ITEM_PAINT, true);

	message_add(entity_by_slag(game, "virtual_guard"), "Security guard", "Where are you going!? You need a pass to get in here! I can't let you in without one.", 0);
	message_add(entity_by_slag(game, "virtual_guard"), "Security guard", "Not bad, the pass does look real. Except...", 1);
    message_add(entity_by_slag(game, "virtual_guard"), "Security guard", "...it's rare to see an 80-year-old woman listed on a pass...", 1);
    message_add(entity_by_slag(game, "virtual_guard"), "Security guard", "You're in luck, I have a piece of virtual vegetable garden near the base.", 1);
    message_add(entity_by_slag(game, "virtual_guard"), "Security guard", "I recently purchased it to grow crypto potatoes, but right now I don't have time to do that.", 1);
	message_add(entity_by_slag(game, "virtual_guard"), "Security guard", "If you harvest the rest of crypto potatoes, I'll turn a blind eye to the fake pass.", 1);
    message_add(entity_by_slag(game, "virtual_guard"), "Security guard", "I see you did what I told you to do, all right, but I don't want to witness you here again.", 2);

	message_add(entity_by_slag(game, "virtual_sarge"), "Sergeant Pyatochka", "Greetings, rookie! I saw that you need a pass, right?", 0);
    message_add(entity_by_slag(game, "virtual_sarge"), "Sergeant Pyatochka", "I've got an assignment just for you, see the gray grass in front of me...", 0);
    message_add(entity_by_slag(game, "virtual_sarge"), "Sergeant Pyatochka", "...that needs to be dyed green. How? With paint, of course!", 0);
    message_add(entity_by_slag(game, "virtual_sarge"), "Sergeant Pyatochka", "There should be one right here behind the obstacle course.", 0);
    message_add(entity_by_slag(game, "virtual_sarge"), "Sergeant Pyatochka", "Get the paint, paint the grass, and maybe we can deal with your pass.", 0);
	message_add(entity_by_slag(game, "virtual_sarge"), "Sergeant Pyatochka", "You really did that? Not bad, but my granny would have done it a lot faster...", 1);
    message_add(entity_by_slag(game, "virtual_sarge"), "Sergeant Pyatochka", "...but okay, here's your pass.", 1);

	message_add(entity_by_slag(game, "virtual_general"), "Virtual General Prokofiev", "Soldier, you were supposed to be here two hours ago! Were you painting the grass out there?", 0);
    message_add(entity_by_slag(game, "virtual_general"), "Virtual General Prokofiev", "You're on an important mission to find a lost Internet soldier, commander of a platoon of Internet couch troops.", 0);
    message_add(entity_by_slag(game, "virtual_general"), "Virtual General Prokofiev", "It's a secret mission that only you can do.", 0);
    message_add(entity_by_slag(game, "virtual_general"), "Virtual General Prokofiev", "Move on right now! Unfortunately, you're going alone, because everyone else is still are busy with virtual vegetable gardens.", 0);
    message_add(entity_by_slag(game, "virtual_general"), "Virtual General Prokofiev", "Go to the portal that teleported you here.", 0);

	message_add(entity_by_slag(game, "virtual_tumbleweed"), "Tumbelweed", "You know... I used to be a couch general, too... And then...", 0);
	message_add(entity_by_slag(game, "virtual_tumbleweed"), "Tumbelweed", "...", 0);
	message_add(entity_by_slag(game, "virtual_tumbleweed"), "General Tumbelweed", "...", 0);
    message_add(entity_by_slag(game, "virtual_tumbleweed"), "Tumbelweed", "two percent sh#t.", 0);
    message_add(entity_by_slag(game, "virtual_tumbleweed"), "General Tumbelweed", "...", 0);
    message_add(entity_by_slag(game, "virtual_tumbleweed"), "Tumbelweed", "Never mind.", 0);

    // Level 02
    npc_add(game, "virtual_scientist", set_tile(6, 11), 12, 46, true);
    door_add(game, "locked_door", set_tile(10, 0), set_tile(9, 0), 32, 75, true, ITEM_FINAL_KEY, false);
    door_add(game, "locked_door", set_tile(12, 4), set_tile(11, 4), 2, 47, true, ITEM_CAVE_KEY, false);
    item_add(game, set_tile(9, 14), 7, 94, ITEM_FINAL_KEY, true);
    item_add(game, set_tile(2, 14), 30, 55, ITEM_CAVE_KEY, true);
    object_add(game, "final_portal0", set_tile(11, 0), set_tile(11, 0), 31, 72, false, ITEM_NOTSET, 1000, false);
	object_add(game, "final_portal1", set_tile(12, 0), set_tile(12, 0), 32, 72, false, ITEM_NOTSET, 1000, false);

    message_add(entity_by_slag(game, "virtual_scientist"), "Virtual Professor Solovyov", "Oh, hello! We finally found you, dear. Sorry, we've been having problems with the servers lately...", 0);
	message_add(entity_by_slag(game, "virtual_scientist"), "Virtual Professor Solovyov", "We can't tell where you are yet, so be careful!", 0);
	message_add(entity_by_slag(game, "virtual_scientist"), "Virtual Professor Solovyov", "There's probably an exit portal somewhere around here, but I'd advise you to wait for help.", 0);
    message_add(entity_by_slag(game, "virtual_scientist"), "Virtual Professor Solovyov", "We've already sent a report to Cheburnet's office, I think you'll get help soon... See you...", 0);


	map_init(game, "resource/maps/map.csv");

	tileset_init(game, "resource/sprites/tileset.png");

	traps_init(game);

	death_init(game);

	questsys_init(game);
}

void scene_prepare(t_game* game) {
	SDL_SetRenderDrawColor(game->renderer, 0, 0, 0, 0);
	SDL_RenderClear(game->renderer);
}

void scene_draw(t_game* game) {
	map_draw(game);
	trap_draw(game);
	entity_draw(game);

    if (game->dev_mode.im_dev) {
        char coords[16];
        char move_speed[16];
        sprintf(coords, "x: %d    y: %d", game->player->x / (TILE_SCALE * TILE_SIZE), game->player->y / (TILE_SCALE * TILE_SIZE));
        sprintf(move_speed, "Move speed: %d", PLAYER_SPEED + game->dev_mode.acceleration);
        text_draw(game, coords, 10, 10, 24, ANCHOR_TOP_LEFT);
        text_draw(game, move_speed, 10, 85, 24, ANCHOR_TOP_LEFT);
        text_draw(game, "Hold [K] to skip message", 10, 110, 24, ANCHOR_TOP_LEFT);

        if (game->dev_mode.god) {
            text_draw(game, "God: on", 10, 35, 24, ANCHOR_TOP_LEFT);
        }
        else {
            text_draw(game, "God: off", 10, 35, 24, ANCHOR_TOP_LEFT);
        }
        
        if (game->dev_mode.noclip) {
            text_draw(game, "No-clip: on", 10, 60, 24, ANCHOR_TOP_LEFT);
        }
        else {
            text_draw(game, "No-clip: off", 10, 60, 24, ANCHOR_TOP_LEFT);
        }
    }
    
	message_draw(game);

	death_draw(game);

    if (game->is_finish) {
        SDL_Rect rect;
        rect.x = 0;
        rect.y = 0;
        rect.w = SCREEN_WIDTH;
        rect.h = SCREEN_HEIGHT;
        SDL_SetRenderDrawColor(game->renderer, 0, 0, 0, 0);
        SDL_RenderFillRect(game->renderer, &rect);

        text_draw(game, "Chapter II", SCREEN_WIDTH / 2,  SCREEN_HEIGHT / 2 - 20, 144, ANCHOR_BOTTOM_CENTER);
        text_draw(game, "Soon...", SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 + 20, 24, ANCHOR_TOP_CENTER);
    }
}

void scene_present(t_game* game) {
	SDL_RenderPresent(game->renderer);
}

void scene_logic(t_game* game) {
	questsys_logic(game);
	entity_logic(game);
	trap_logic(game);
	death_logic(game);
	sound_logic(game);
}

void scene_free(t_game* game) {
  trap_free(game);
	entity_free(game);
	tileset_free(game);
	death_free(game);
}

void traps_init(t_game *game) {
	trap_add(game, set_tile(3, 14), set_tile(4, 14), 17, 4, 18, 4, TRAP_TRIGGER, 0);
	trap_add(game, set_tile(3, 14), set_tile(4, 14), 20, 4, 24, 5, TRAP_GLIMMER, 500);
   
    
  	trap_add(game, set_tile(3, 14), set_tile(4, 14), 17, 4, 18, 4, TRAP_TRIGGER, 0);
	trap_add(game, set_tile(3, 14), set_tile(4, 14), 20, 4, 24, 5, TRAP_GLIMMER, 500);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 10, 13, 10, 15, TRAP_GLIMMER, 1000);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 10, 16, 10, 17, TRAP_GLIMMER, 1900);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 11, 13, 11, 14, TRAP_GLIMMER, 1900);
	trap_add(game, set_tile(3, 14), set_tile(4, 14), 11, 15, 11, 15, TRAP_GLIMMER, 2900);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 11, 16, 11, 17, TRAP_GLIMMER, 1000);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 11, 19, 11, 22, TRAP_TRIGGER, 0);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 1, 10, 1, 10, TRAP_TRIGGER, 0);

	trap_add(game, set_tile(3, 14), set_tile(4, 14), 7, 19, 7, 22, TRAP_GLIMMER, 2800);

	trap_add(game, set_tile(3, 14), set_tile(4, 14), 7, 14, 7, 18, TRAP_GLIMMER, 1800);

	trap_add(game, set_tile(3, 14), set_tile(4, 14), 7, 10, 7, 11, TRAP_GLIMMER, 3800);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 1, 12, 1, 14, TRAP_GLIMMER, 2600);
	trap_add(game, set_tile(3, 14), set_tile(4, 14), 1, 16, 1, 19, TRAP_GLIMMER, 1900);
  

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 2, 12, 2, 15, TRAP_GLIMMER, 3000);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 2, 16, 2, 19, TRAP_GLIMMER, 1900);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 2, 20, 2, 21, TRAP_TRIGGER, 0);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 1, 23, 1, 25, TRAP_TRIGGER, 0);


    trap_add(game, set_tile(3, 14), set_tile(4, 14), 2, 25, 2, 25, TRAP_GLIMMER, 1900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 3, 25, 3, 25, TRAP_GLIMMER, 2900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 4, 25, 4, 25, TRAP_GLIMMER, 5700);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 5, 25, 5, 25, TRAP_GLIMMER, 5700);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 6, 25, 6, 25, TRAP_GLIMMER, 6900);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 13, 47,   13, 47, TRAP_GLIMMER, 3900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 14, 47,   14, 47, TRAP_GLIMMER, 4300);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 15, 47,   15, 47, TRAP_GLIMMER, 2700);
   
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 17, 49,  17, 49, TRAP_GLIMMER, 5700);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 18, 49,   18, 49, TRAP_GLIMMER, 3900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 19, 49,   19, 49, TRAP_GLIMMER, 4300);


    trap_add(game, set_tile(3, 14), set_tile(4, 14), 17, 54,  17, 54, TRAP_GLIMMER, 4300);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 18, 54,   18, 54, TRAP_GLIMMER, 3900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 19, 54,   19, 54, TRAP_GLIMMER, 5700);

	  trap_add(game, set_tile(3, 14), set_tile(4, 14), 18, 60,  18, 60, TRAP_GLIMMER, 4300);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 19, 60,   19, 60, TRAP_GLIMMER, 3900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 20, 60,   20, 60, TRAP_GLIMMER, 5700);

	trap_add(game, set_tile(3, 14), set_tile(4, 14), 21, 61,  21, 61, TRAP_GLIMMER, 4300);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 22, 61,   22, 61, TRAP_GLIMMER, 3900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 23, 61,   23, 61, TRAP_GLIMMER, 5700);

	trap_add(game, set_tile(3, 14), set_tile(4, 14), 26, 59,  26, 59, TRAP_GLIMMER, 4300);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 27, 59,   27, 59, TRAP_GLIMMER, 3900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 28, 59,   28, 59, TRAP_GLIMMER, 5700);

	
	trap_add(game, set_tile(3, 14), set_tile(4, 14), 29, 60, 29, 60, TRAP_GLIMMER, 1800);
	trap_add(game, set_tile(3, 14), set_tile(4, 14), 29, 61, 29, 61, TRAP_GLIMMER, 4800);
	trap_add(game, set_tile(3, 14), set_tile(4, 14), 29, 62, 29, 62, TRAP_GLIMMER, 1800);

	trap_add(game, set_tile(3, 14), set_tile(4, 14), 27, 65,  27, 65, TRAP_GLIMMER, 4300);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 28, 65,   28, 65, TRAP_GLIMMER, 3900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 29, 65,   29, 65, TRAP_GLIMMER, 5700);


    trap_add(game, set_tile(3, 14), set_tile(4, 14), 22, 55,   22, 55, TRAP_GLIMMER, 5700);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 23, 55,   23, 55, TRAP_GLIMMER, 3900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 24, 55,   24, 55, TRAP_GLIMMER, 4300);

	  trap_add(game, set_tile(3, 14), set_tile(4, 14), 25, 52,   25, 52, TRAP_GLIMMER, 5700);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 26, 52,   26, 52, TRAP_GLIMMER, 3900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 27, 52,   27, 52, TRAP_GLIMMER, 4300);


    

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 9, 47,  9, 47, TRAP_GLIMMER, 4300);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 8, 47,   8, 47, TRAP_GLIMMER, 3900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 7, 47,   7, 47, TRAP_GLIMMER, 5700);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 13, 55,   13, 55, TRAP_GLIMMER, 4300);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 12, 55,   12, 55, TRAP_GLIMMER, 3900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 11, 55,   11, 55, TRAP_GLIMMER, 5700);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 9, 53,   9, 53, TRAP_GLIMMER, 4300);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 8, 53,   8, 53, TRAP_GLIMMER, 3900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 7, 53,   7, 53, TRAP_GLIMMER, 5700);


    
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 8, 49,   9, 49, TRAP_GLIMMER, 3900);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 4, 49,   6, 49, TRAP_GLIMMER, 5700);


     trap_add(game, set_tile(3, 14), set_tile(4, 14), 1, 49, 1, 56, TRAP_GLIMMER, 6000);

     trap_add(game, set_tile(3, 14), set_tile(4, 14), 5, 58, 5, 60, TRAP_GLIMMER, 2500);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 8, 58, 8, 62 , TRAP_GLIMMER, 3500);

	
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 9, 63, 11, 63 , TRAP_GLIMMER, 3500);
    trap_add(game, set_tile(3, 14), set_tile(4, 14), 10, 57, 13, 57 , TRAP_GLIMMER, 2500);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 15, 62, 15, 66 , TRAP_GLIMMER, 3200);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 19, 63, 15, 72 , TRAP_GLIMMER, 5900);


    trap_add(game, set_tile(3, 14), set_tile(4, 14), 10, 90, 18, 90 , TRAP_GLIMMER, 7900);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 10, 84, 10, 88 , TRAP_GLIMMER, 5900);

    trap_add(game, set_tile(3, 14), set_tile(4, 14), 1, 84, 1, 97 , TRAP_GLIMMER, 7900);
   trap_add(game, set_tile(3, 14), set_tile(4, 14), 8, 92, 10, 92 , TRAP_GLIMMER, 1500);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 10, 93, 12, 93 , TRAP_GLIMMER, 3900);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 8, 86, 8, 89 , TRAP_GLIMMER, 3900);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 4, 86, 7, 86 , TRAP_GLIMMER, 4900);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 4, 94, 4, 97 , TRAP_GLIMMER, 3900);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 5, 96 , 6, 96 , TRAP_GLIMMER, 1400);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 1, 101 , 1, 103 , TRAP_GLIMMER, 1900);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 3, 103 , 7, 103 , TRAP_GLIMMER, 2900);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 15, 72 , 19, 72 , TRAP_GLIMMER, 1900);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 19, 63 , 21, 63 , TRAP_GLIMMER, 1900);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 23, 67 , 23, 71 , TRAP_GLIMMER, 1900);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 21, 71 , 21, 75 , TRAP_GLIMMER, 3900);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 28, 71 , 28, 75 , TRAP_GLIMMER, 2900);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 28, 69 , 28, 69 , TRAP_GLIMMER, 200);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 23, 78 , 28, 78 , TRAP_GLIMMER, 4900);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 23, 83 , 29, 83 , TRAP_GLIMMER, 6900);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 3, 100 , 10, 100 , TRAP_GLIMMER, 2900);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 30, 99 , 30, 104 , TRAP_GLIMMER, 3900);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 29, 99 , 29, 102 , TRAP_GLIMMER, 3900);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 31, 92 , 31, 95 , TRAP_GLIMMER, 3900);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 26, 94 , 28, 94 , TRAP_GLIMMER, 2900);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 24, 90 , 24, 92 , TRAP_GLIMMER, 1900);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 14, 96 , 16, 96 , TRAP_GLIMMER, 2300);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 16, 98 , 17, 96 , TRAP_GLIMMER, 2300);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 15, 101 , 17, 101 , TRAP_GLIMMER, 2300);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 15, 104 , 20, 104 , TRAP_GLIMMER, 6300);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 20, 100 , 22, 100 , TRAP_GLIMMER, 2100);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 24, 101 , 24, 104 , TRAP_GLIMMER, 2900);



   trap_add(game, set_tile(3, 14), set_tile(4, 14), 20, 100 , 22, 100 , TRAP_GLIMMER, 2100);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 22, 88 , 22, 92 , TRAP_GLIMMER, 4100);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 22, 94 , 22, 96 , TRAP_GLIMMER, 3100);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 25, 90 , 27, 90 , TRAP_GLIMMER, 2700);

   trap_add(game, set_tile(3, 14), set_tile(4, 14), 25, 92 , 26, 92 , TRAP_GLIMMER, 2700);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 26, 94 , 28, 94 , TRAP_GLIMMER, 2900);



   trap_add(game, set_tile(3, 14), set_tile(4, 14), 28, 92 , 30, 92 , TRAP_GLIMMER, 2900);


   trap_add(game, set_tile(3, 14), set_tile(4, 14), 32, 94 , 33, 94 , TRAP_GLIMMER, 2100);
}
