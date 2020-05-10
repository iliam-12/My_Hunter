/*
** EPITECH PROJECT, 2019
** my_game
** File description:
** lll JÖKER lll
*/

/* _____ INCLUDE _____ */

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/Text.h>
#include <stdio.h>
#include <stdlib.h>

/* _______ STRUCT _______ */

struct init
{
    int p;
    int point;
    char *str;
    char *s;
    sfRenderWindow *window;
    sfVideoMode mode;
    sfTexture *texture_bg;
    sfSprite *sprite_bg;
    sfTexture *texture_bird;
    sfSprite *sprite_bird;
    sfVector2f pos_bird;
    sfIntRect size_rect;
    sfClock *time2;
    sfVector2i windob;
    sfVector2f pos_text;
    sfFont *font;
    sfText *text;
    sfMusic *sound;
    sfMusic *sound2;
    sfVector2f pos_nb;
    sfFont *font_nb;
    sfText *text_nb;
    sfVector2f pos_heart;
    sfVector2f pos_heart1;
    sfVector2f pos_heart2;
    sfSprite *sprite_heart;
    sfSprite *sprite_heart1;
    sfSprite *sprite_heart2;
    sfTexture *texture_heart;
    sfTexture *texture_heart1;
    sfTexture *texture_heart2;
    sfIntRect size_heart;
    sfIntRect size_heart1;
    sfIntRect size_heart2;
    sfEvent event;
    sfVector2f cursor;
};

typedef struct init init_t;

/* ________ PROTOTYPE _________ */

int main(void);
void before_while(init_t *elem);
void big_if(init_t *elem);
void big_while(init_t *elem);
void click(init_t *elem);
void clock(init_t *elem);
void display_heart(init_t *elem);
void display_heart1(init_t *elem);
void display_heart2(init_t *elem);
void display_heart3(init_t *elem);
void restart_drag(init_t *elem);
void render1(init_t *elem);
void display_hearts(init_t *elem);
void display_nb(init_t *elem);
void end_of_second_while(init_t *elem);
const char *int_tochar(int i);
void my_dragoune(init_t *elem);
void put_gameover(init_t *elem);
void put_score(init_t *elem);
void sound(init_t *elem);
void window(init_t *elem);
void destroy_motherfuker(init_t *elem);
