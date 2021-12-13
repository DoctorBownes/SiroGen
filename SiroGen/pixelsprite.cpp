#include "pixelsprite.h"

PixelSprite::PixelSprite()
{
	width = 0;
	height = 0;
	char canvas[54]
	{
        1,1,1,1,1,1,1,1,1,
        1,1,2,1,1,1,2,1,1,
        1,1,1,1,1,1,1,1,1,
        1,2,1,1,1,1,1,2,1,
        1,1,2,2,2,2,2,1,1,
        1,1,1,1,1,1,1,1,1,
	};
	AddSprite(canvas, 9,10);
}

void PixelSprite::AddSprite(char canvas[], char width, char height)
{
    //for (int i =0; i < )
	glGenTextures(1, &spritetexture);
	glBindTexture(GL_TEXTURE_2D, spritetexture);
	// set the texture wrapping/filtering options (on the currently bound texture object)
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST_MIPMAP_NEAREST);
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST)
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR, GL_UNSIGNED_BYTE, canvas);
	glGenerateMipmap(GL_TEXTURE_2D);

    const GLfloat temp_vertex_buffer_data[] = {
        0.5f * width,  0.5f * height, 0.0f,
       -0.5f * width,  0.5f * height, 0.0f,
       -0.5f * width, -0.5f * height, 0.0f,

       -0.5f * width, -0.5f * height, 0.0f,
        0.5f * width, -0.5f * height, 0.0f,
        0.5f * width,  0.5f * height, 0.0f,
    };

    //sprite.LoadTGAImage(TGA);
    // Send vertices to GPU

    static const GLfloat temp_uv_buffer_data[] = {
        1.0f, 1.0f,
        0.0f, 1.0f,
        0.0f, 0.0f,

        0.0f, 0.0f,
        1.0f, 0.0f,
        1.0f, 1.0f,
    };


    glGenBuffers(1, &sprite);
    glBindBuffer(GL_ARRAY_BUFFER, sprite);
    glBufferData(GL_ARRAY_BUFFER, sizeof(temp_vertex_buffer_data), temp_vertex_buffer_data, GL_STATIC_DRAW);

    glGenBuffers(1, &uv);
    glBindBuffer(GL_ARRAY_BUFFER, uv);
    glBufferData(GL_ARRAY_BUFFER, sizeof(temp_uv_buffer_data), temp_uv_buffer_data, GL_STATIC_DRAW);
}