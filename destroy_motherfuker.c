/*
** EPITECH PROJECT, 2020
** MUL_my_hunter_2019
** File description:
** destroy_motherfuker
*/

#include "my.h"

void destroy_motherfuker(init_t *elem)
{
    sfSprite_destroy(elem->sprite_bg);
    sfSprite_destroy(elem->sprite_bird);
    sfSprite_destroy(elem->sprite_heart);
    sfSprite_destroy(elem->sprite_heart1);
    sfSprite_destroy(elem->sprite_heart2);
    sfTexture_destroy(elem->texture_bg);
    sfTexture_destroy(elem->texture_bird);
    sfTexture_destroy(elem->texture_heart);
    sfTexture_destroy(elem->texture_heart1);
    sfTexture_destroy(elem->texture_heart2);
    sfFont_destroy(elem->font);
    sfFont_destroy(elem->font_nb);
    sfText_destroy(elem->text);
    sfText_destroy(elem->text_nb);
    sfMusic_destroy(elem->sound);
    sfMusic_destroy(elem->sound2);
    sfRenderWindow_destroy(elem->window);
}