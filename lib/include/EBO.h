//
// Created by Punreach Rany on 10/14/24.
//

#ifndef EBO_H
#define EBO_H



#include<glad/glad.h>

class EBO
{
public:
    // ID reference of Elements Buffer Object
    GLuint ID;
    // Constructor that generates a Elements Buffer Object and links it to indices
    EBO(GLuint* indices, GLsizeiptr size);

    // Binds the EBO
    void Bind();
    // Unbinds the EBO
    void Unbind();
    // Deletes the EBO
    void Delete();
};




#endif //EBO_H
