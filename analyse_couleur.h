#ifndef ANALYSE_COULEUR_H
#define ANALYSE_COULEUR_H

uint32_t moyenne_ligne(uint8_t *buffer);
float get_distance_cm(void);
uint16_t get_line_position(void);
void process_image_start(void);
void affichage(uint8_t* buffer);


#endif /* ANALYSE_COULEUR_H */