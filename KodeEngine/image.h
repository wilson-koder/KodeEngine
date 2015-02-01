//
//  image.h
//  KodeEngine
//
//  Created by Wilson Koder on 22/1/15.
//  Copyright (c) 2015 WilsonKoder. All rights reserved.
//

#ifndef __KodeEngine__image__
#define __KodeEngine__image__

#include <GL/glew.h>
#include <string>
#include <vector>

namespace KodeEngine {
    class Image {
    public:
        Image(std::string &fileName);
        ~Image();
        GLuint tex;
		void bind(GLuint unit);
//        void render(GLuint shapeBuffer, GLuint texBuffer, GLuint vertLayoutLoc, std::string imgUniform, GLuint vertIndex, GLuint numOfVerts);
        void destroyTexture();
        int getWidth();
		int getHeight();
        int getChannels();
    private:
        int texWidth;
		int texHeight;
        int texChannels;
    };
}


#endif /* defined(__KodeEngine__image__) */
