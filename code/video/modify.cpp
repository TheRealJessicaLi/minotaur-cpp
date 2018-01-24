#include "modify.h"
#include "squares.h"

void VideoModifier::attachModifier(std::unique_ptr<VideoModifier> &ptr, int modifier) {
    switch(modifier) {
        case SQUARES:
            ptr.reset(new Squares);
            break;
        default:
            ptr.release();
            break;
    }
}

void VideoModifier::addModifierList(QComboBox *list) {
    list->addItem("None");
    list->addItem("Square");
}
