//
// Created by wangzhen on 18/02/2017.
//

#include <iostream>

struct box_t{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show(box_t box)
{
    std::cout << "maker is " << box.maker << std::endl;
    std::cout << "height is " << box.height << std::endl;
    std::cout << "width is " << box.width << std::endl;
    std::cout << "length is " << box.length << std::endl;
    std::cout << "volume is " << box.volume << std::endl;
}

bool set_volume(box_t *p_box)
{
    p_box->volume = p_box->length * p_box->width * p_box->height;
    return true;
}

int main(void)
{
    box_t box = {"Thomas", 100.0, 120.0, 3.0};
    show(box);
    set_volume(&box);
    show(box);
    return 0;
}
