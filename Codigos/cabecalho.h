void setup();
GLuint loadTexture(const char* arquivo);
void redimensiona(int weidth, int height);
void refresh(int delay);
void desenhaMinhaCena();
void drawObject(spriteObject objeto);
void teclaPressionada(unsigned char key, int x, int y);
void teclaSegurada(unsigned char key, int x, int y);
void mouseMove(int x, int y);
void mouseClick(int botao, int estado, int x, int y);
Mix_Chunk * carregaMusica(char const file[40]);
void comecaMusica(Mix_Chunk * musica, int channel, int loop);
void paraMusica(int channel);