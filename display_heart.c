/*
** EPITECH PROJECT, 2019
** my_game
** File description:
** lll JÖKER lll
*/

#include "my.h"

void display_heart(init_t *elem)
{
    elem->texture_heart = sfTexture_createFromFile("sprite/heart.png", NULL);
    elem->sprite_heart = sfSprite_create();
    sfSprite_setTexture(elem->sprite_heart, elem->texture_heart, sfTrue);
    elem->pos_heart.x = 1390;
    elem->pos_heart.y = 655;
    elem->size_heart.width = 25;
    elem->size_heart.height = 24;
    sfSprite_setTextureRect(elem->sprite_heart, elem->size_heart);
    sfSprite_setPosition(elem->sprite_heart, elem->pos_heart);
}

void display_heart1(init_t *elem)
{
    elem->texture_heart1 = sfTexture_createFromFile("sprite/heart.png", NULL);
    elem->sprite_heart1 = sfSprite_create();
    sfSprite_setTexture(elem->sprite_heart1, elem->texture_heart1, sfTrue);
    elem->pos_heart1.x = 1425;
    elem->pos_heart1.y = 655;
    elem->size_heart1.width = 25;
    elem->size_heart1.height = 24;
    sfSprite_setTextureRect(elem->sprite_heart1, elem->size_heart1);
    sfSprite_setPosition(elem->sprite_heart1, elem->pos_heart1);
}

void display_heart2(init_t *elem)
{
    elem->texture_heart2 = sfTexture_createFromFile("sprite/heart.png", NULL);
    elem->sprite_heart2 = sfSprite_create();
    sfSprite_setTexture(elem->sprite_heart2, elem->texture_heart2, sfTrue);
    elem->pos_heart2.x = 1460;
    elem->pos_heart2.y = 655;
    elem->size_heart2.width = 25;
    elem->size_heart2.height = 24;
    sfSprite_setTextureRect(elem->sprite_heart2, elem->size_heart2);
    sfSprite_setPosition(elem->sprite_heart2, elem->pos_heart2);
}

void restart_drag(init_t *elem)
{
    if (elem->pos_bird.x >= 1599){
        elem->p++;
        elem->pos_bird.x = -100;
        elem->pos_bird.y = rand() % 755;
    }
    elem->pos_bird.x += 1 + 0.5 * elem->point;
}

void render1(init_t *elem)
{
    sfRenderWindow_display(elem->window);
    sfRenderWindow_clear(elem->window, sfBlack);
    sfRenderWindow_drawSprite(elem->window, elem->sprite_bg, NULL);
    sfSprite_setPosition(elem->sprite_bird, elem->pos_bird);
    sfRenderWindow_drawText(elem->window, elem->text, NULL);
    if (elem->p <= 3)
        sfRenderWindow_drawText(elem->window, elem->text_nb, NULL);
    if (elem->p == 3){
        elem->texture_bg = sfTexture_createFromFile("sprite/go.png", NULL);
        elem->sprite_bg = sfSprite_create();
        sfSprite_setTexture(elem->sprite_bg, elem->texture_bg, sfTrue);
    }
    if (elem->p <= 2){
        sfRenderWindow_drawSprite(elem->window, elem->sprite_heart, NULL);
        sfRenderWindow_drawSprite(elem->window, elem->sprite_bird, NULL);
    }
    if (elem->p <= 1)
        sfRenderWindow_drawSprite(elem->window, elem->sprite_heart1, NULL);
    if (elem->p <= 0)
        sfRenderWindow_drawSprite(elem->window, elem->sprite_heart2, NULL);
}