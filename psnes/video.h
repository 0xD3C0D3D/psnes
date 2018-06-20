//
// Created by cpasjuste on 25/11/16.
//

#ifndef _PSNESVIDEO_H_
#define _PSNESVIDEO_H_

#include <cstring>

#ifdef __SWITCH__
#include "TODO"
#else

namespace c2dui {

    class PSNESVideo : public C2DUIVideo {

    public:

        PSNESVideo(C2DUIGuiMain *ui, void **pixels, int *pitch, const c2d::Vector2f &size);

        void updateScaling();

    private:

        C2DUIGuiMain *ui;
    };
}
#endif //  __SWITCH__
#endif //_PSNESVIDEO_H_
