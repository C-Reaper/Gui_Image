#include "/home/codeleaded/System/Static/Library/Image.h"

int main() {
    const int width = 256;
    const int height = 256;
    unsigned int* buffer = (int* )malloc(width * height * sizeof(unsigned int));

    for (int y = 0;y < height;y++) {
        for (int x = 0;x < width;x++) {
            buffer[y * width + x] = 0xFFFF0000;
        }
    }

    Image_Save("./data/input.png",buffer,width,height);
    if(buffer) free(buffer);
    buffer = NULL;


    int lwidth;
    int lheight;
    unsigned int* bufferin = Image_Load("./data/input.png",&lwidth,&lheight);
    if(bufferin) free(bufferin);
    bufferin = NULL;
    
    return 0;
}