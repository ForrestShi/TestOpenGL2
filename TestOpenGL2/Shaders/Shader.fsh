//
//  Shader.fsh
//  TestOpenGL2
//
//  Created by forrest on 11-8-7.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
