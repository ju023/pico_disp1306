#include "pico/stdlib.h"

#include "ssd1306.h"
#include "../Image/Image_Face_Blink.h"
#include "Face_Fn.h"

/*----------------------------------------------------------------------*/
/* function:瞬きの処理                                                  */
/* 引数:                                                                */
/*---------------------------------------------------------------------*/
void Face_Blink_Fn(ssd1306_t *disp_p)
{
    /* 表情_瞬き_前半 */
    ssd1306_bmp_show_image(disp_p, image_blink_data1, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data2, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data3, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data4, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data5, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data6, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data7, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    /* 目を閉じている */
    ssd1306_bmp_show_image(disp_p, image_no_face, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(50);
    ssd1306_clear(disp_p);

    /* 表情_瞬き_後半 */
    ssd1306_bmp_show_image(disp_p, image_blink_data8, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data9, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data10, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data11, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data12, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data13, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data14, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data15, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    ssd1306_bmp_show_image(disp_p, image_blink_data1, image_blink_size);
    ssd1306_show(disp_p);
    sleep_ms(image_blink_time);
    ssd1306_clear(disp_p);

    sleep_ms(100);
}
