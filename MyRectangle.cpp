//
// Created by dtyur on 15.12.2023.
//

#include "MyRectangle.h"
#include "MyCanvas.h"

void MyRectangle::draw(){
    if (canvas_ptr != nullptr) {
        canvas_ptr->draw_rectangle(x1, y1, x2, y2);
    }
}