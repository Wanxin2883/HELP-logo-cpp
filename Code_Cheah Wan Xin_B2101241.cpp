//Name      : Cheah Wan Xin
//Student ID: B2101241
#include <stdio.h>
#include <graphics.h>
#include <windows.h>

int change()
{
    int gd = DETECT,gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    initwindow(1200, 720, "Code_Cheah Wan Xin_B2101241", 200, 100);

    settextstyle(4, HORIZ_DIR, 1);
    outtextxy(0, 10, "  Name: Cheah Wan Xin");
    outtextxy(0, 50, "  Student ID: B2101241");

    int col, font;

    printf("\n\n Change color of the logo: ");
    printf("\n ** The current color of the logo is Red (4) ** ");
    printf("\n\n Black         - 0 ");
    printf("\n Blue          - 1 ");
    printf("\n Green         - 2 ");
    printf("\n Cyan          - 3 ");
    printf("\n Red           - 4 ");
    printf("\n Magenta       - 5 ");
    printf("\n Brown         - 6 ");
    printf("\n Light Gray    - 7 ");
    printf("\n Dark Gray     - 8 ");
    printf("\n Light Blue    - 9 ");
    printf("\n Light Green   - 10 ");
    printf("\n Light Cyan    - 11 ");
    printf("\n light Red     - 12 ");
    printf("\n Light Magenta - 13 ");
    printf("\n Yellow        - 14 ");
    printf("\n White         - 15 ");
    printf("\n\n Enter your choice: ");
    scanf(" %d", &col);

    printf("\n\n Change font of the logo: ");
    printf("\n ** The current font of the logo is Gothic Font (4) ** ");
    printf("\n\n Default Font     - 0 ");
    printf("\n Triplex Font     - 1 ");
    printf("\n Small Font       - 2 ");
    printf("\n Sans Serif Font  - 3 ");
    printf("\n Gothic Font      - 4 ");
    printf("\n Script Font      - 5 ");
    printf("\n Simplex Font     - 6 ");
    printf("\n Triplex Scr Font - 7 ");
    printf("\n Complex Font     - 8 ");
    printf("\n European Font    - 9 ");
    printf("\n Bold Font        - 10 ");
    printf("\n\n Enter your choice: ");
    scanf(" %d", &font);

    setfillstyle(SOLID_FILL, col);
    bar (250, 238, 260, 390);//line 1
    bar (290, 238, 300, 390);//line 2
    bar (330, 238, 340, 390);//line 3
    bar (370, 238, 380, 390);//line 4
    bar (410, 238, 420, 390);//line 5

    setcolor(col);
    setfillstyle(SOLID_FILL, col);
    int tri3 [100]={150, 150, 325, 150, 150, 500, 150, 150};
    fillpoly(4, tri3);

    setcolor(col);
    setfillstyle(SOLID_FILL, col);
    int tri4 [100]={500, 150, 500, 500, 325, 500, 500, 150};
    fillpoly(4, tri4);

    setcolor(15);

    settextstyle(font, HORIZ_DIR, 10);
    outtextxy(550, 150, "HELP");

    settextstyle(font, HORIZ_DIR, 8);
    outtextxy(540, 350, "University");

    settextstyle(font, HORIZ_DIR, 7);
    outtextxy(150, 510, "university of achievers");

    getch();
    closegraph();
}

int main ()
{
    int gd = DETECT, gm;
    char choice;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    initwindow(1200, 720, "Code_Cheah Wan Xin_B2101241", 200, 100);

    settextstyle(4, HORIZ_DIR, 2);
    outtextxy(0, 10, "  Name: Cheah Wan Xin");
    outtextxy(0, 50, "  Student ID: B2101241");

    setfillstyle(SOLID_FILL, 4);
    bar (250, 238, 260, 390);//line 1
    bar (290, 238, 300, 390);//line 2
    bar (330, 238, 340, 390);//line 3
    bar (370, 238, 380, 390);//line 4
    bar (410, 238, 420, 390);//line 5

    setcolor(4);
    setfillstyle(SOLID_FILL, 4);
    int tri1 [100]={150, 150, 325, 150, 150, 500, 150, 150};
    fillpoly(4, tri1);

    setcolor(4);
    setfillstyle(SOLID_FILL, 4);
    int tri2 [100]={500, 150, 500, 500, 325, 500, 500, 150};
    fillpoly(4, tri2);

    setcolor(15);

    settextstyle(4, HORIZ_DIR, 10);
    outtextxy(550, 150, "HELP");

    settextstyle(4, HORIZ_DIR, 8);
    outtextxy(540, 350, "University");

    settextstyle(4, HORIZ_DIR, 7);
    outtextxy(150, 510, "university of achievers");

    printf("\n Do you want to change the color and font of the logo? (Y/N): ");
    scanf (" %c", &choice);

        if (choice == 'Y' || choice == 'y'){
            change();
        }

        else {
            printf("\n Thank You. \n");
        }

    getch();
    closegraph();
}
