// Cabecalho com as funcoes do programa
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
void attPosicao();
void begin3d();
void movimentacao();
void desenhaInterface();
void desenhaRodaGigante();
void carregOBJ(Objeto3D *objeto, GLMmodel* model);
void desenhaOBJ(Objeto3D objeto, float rotacao);
void setDimensoesProp(Objeto3D *objeto,float aumento);
void setDimensoesDesprop(Objeto3D *objeto, float x, float y, float z);
void setPosicao(Objeto3D *objeto,float x, float y, float z);
void configura2D();
void configura3D();
void setupJogo();
void attDimensoes(Objeto3D *objeto);
void chao();
void aux_rua(int qtdeQDD, float centrox, float centroz, int direcao);
void ruas();
void pipocas();
void bancos();
void aux_cerca(int qtdeQDD, float centrox, float centroz, int direcao);
void cercas();
void postes();
void desenhaPosicao(Objeto3D objeto,float centrox, float centroz, float rotacao);
void arvores();
void lanchonetes();
void carrossel();
void loading();
void torre();
void torreParada(int altura, float tempo);
void xicaras_malucas();
void bancosCadeira();
