/*
** EPITECH PROJECT, 2019
** my_game
** File description:
** lll JÖKER lll
*/

#include "my.h"

void before_while(init_t *elem)
{
    put_score(elem);
    window(elem);
    my_dragoune(elem);
    elem->sound = sfMusic_createFromFile("sound/Jill_Stark_Neon.ogg");
    sfMusic_setLoop(elem->sound, sfTrue);
    sfMusic_play(elem->sound);
}

void big_if(init_t *elem)
{
    if (elem->event.type == sfEvtMouseButtonPressed){
        if (elem->cursor.x >= elem->pos_bird.x - 50 &&
            elem->cursor.x <= elem->pos_bird.x + 150 &&
            elem->cursor.y >= elem->pos_bird.y &&
            elem->cursor.y <= elem->pos_bird.y + 100)
            click(elem);
    }
    if (elem->event.type == sfEvtClosed ||
        sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(elem->window);
}

void big_while(init_t *elem)
{
    while (sfRenderWindow_pollEvent(elem->window, &elem->event)){
        display_hearts(elem);
        big_if(elem);
    }
}

void click(init_t *elem)
{
    elem->point++;
    elem->pos_bird.x = 0;
    elem->pos_bird.y = rand() % 755;
    elem->sound2 = sfMusic_createFromFile("sound/Punch-Sound-Effect.ogg");
    sfMusic_play(elem->sound2);
}

void clock(init_t *elem)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(elem->time2)) >= 45){
        elem->size_rect.left += 135;
        if (elem->size_rect.left == 1890)
            elem->size_rect.left = 0;
        sfSprite_setTextureRect(elem->sprite_bird, elem->size_rect);
        sfClock_restart(elem->time2);
    }
}
