// Side LED Arrays

int left[] = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
int right[] = {110, 111, 112, 113, 114, 115, 116, 117, 118, 119};

void set_side_color(char side, uint8_t r, uint8_t g, uint8_t b){
    uint8_t rgb[3];
    rgb[0] = r;
    rgb[1] = g;
    rgb[2] = b;
    int* leds;

    if(side == 'l'){
        leds = left;
    }else {
        leds = right;
    }

    for(int i = 0; i <= 9; i++){
        rgb_matrix_set_color(leds[i], rgb[0], rgb[1], rgb[2]);
    }
}