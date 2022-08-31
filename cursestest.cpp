#include <ncurses/ncurses.h>

int main(int argc, char **argv)
{

    while (1)
    {

        mousemask(ALL_MOUSE_EVENTS, NULL);
        int c = getch();
        MEVENT event;
        switch (c)
        {
        case KEY_UP:
            printf("keyup");
            break;
        case KEY_DOWN:
            printf("keydown");
            break;
        case KEY_MOUSE:
            if (getmouse(&event) == OK)
            {
                if (event.bstate & BUTTON1_PRESSED) // This works for left-click
                {
                    printf("button1");
                }
                else if (event.bstate & BUTTON2_PRESSED) // This doesn't capture right-click
                {
                    printf("button2");
                }
                else
                    printf("Event: %i", event.bstate); // Doesn't print anything on right-click
            }
            break;
        }
    }
    return 0;
}