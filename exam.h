#ifndef EXAM_H  // Verifica se EXAM_H nao esta definido
#define EXAM_H  // Define EXAM_H para evitar inclusoes multiplas

// Inclusao da biblioteca necessaria
#include <time.h>

// Definicao do tipo "Exam" como um alias para a estrutura "exam"
typedef struct exam Exam;

// Declaracao da funcao para criar um novo exame
Exam* create_exam(int id, int patient_id, int rx_id, struct tm *time);

// Declaracao da funcao para liberar a memoria do "exame"
void destroy_exam(Exam *exam);

// Declaracao da funcao para obter o Id do exame
int get_exam_id(Exam *exam);

// Declaracao da funcao para obter o Id do paciente associado ao exame
int get_exam_patient_id(Exam *exam);

// Declaracao da funcao para obter o Id do aparelho de raio-x associado ao exame
int get_exam_rx_id(Exam *exam);

// Declaracao da funcao para obter a data e hora do exame
struct tm* get_exam_time(Exam *exam);

#endif// Fechando o ifndef