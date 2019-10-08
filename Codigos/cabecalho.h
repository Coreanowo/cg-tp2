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

// p/ carregar .obj
struct modelo *carregaModelo(char *);
void desenhaModelo(struct modelo*);
void preparaListaVisualizacao(struct modelo *m);
void carregaMateriais(struct modelo*, char*);
void iniciaModelo(struct modelo* modelo);
void interpretaLinhaMt1(char *linha, struct modelo *m);
void desenhaObj(struct modelo *m);
const char *toksplit(const char *src, char tokchar, char *token, size_t lgh);
void iniciaLista(listaEncadeada *l);
void adicionaNoFinalLista(listaEncadeada *l, void *conteudo);
void *recuperaEnesimoNo(listaEncadeada *l, int n);
void iniciaMalha(struct malha*);
void adicionaCoordenadaMalha(struct malha*, ponto*);
void adicionaCoordenadaTexturaMalha(struct malha*, ponto*);
void adicionaNormalMalha(struct malha*, vetor*);
struct face *novaFaceMalha(struct malha *);
void adicionaVerticeFace(struct malha*, struct face*, int, int, int);
