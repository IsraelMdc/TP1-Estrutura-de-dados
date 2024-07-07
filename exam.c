// Inclusao do arquivo de cabecalho "exam.h"
#include "exam.h"

// Inclusao das bibliotecas necessarias
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>  

// Definicao da estrutura "exam"
struct exam {
    int id;          // Id do exame
    int patient_id;  // Id do paciente associado ao exame
    int rx_id;       // Id do aparelho de raio-x associado ao exame
    struct tm *time; // Ponteiro para a estrutura "tm" que contem a data e hora do exame
};

// Funcao para criar um novo exame
Exam* create_exam(int id, int patient_id, int rx_id, struct tm *time) {
    // Aloca memoria para um novo exame
    Exam *exam = (Exam*)malloc(sizeof(Exam));
    
    // Verifica se a alocacao de memoria foi bem-sucedida
    if (exam != NULL) { 
        // Inicializacao dos campos
        exam->id = id;                
        exam->patient_id = patient_id;
        exam->rx_id = rx_id;          
        exam->time = time;            
    }
    return exam; // Retorna o ponteiro para o exame criado

}

// Funcao para liberar a memoria do "exame"
void destroy_exam(Exam *exam) {
    // Verifica se o ponteiro nao e nulo
    if(exam != NULL){
        // Liberacao da memoria alocada para o exame
        free(exam->id);
        free(exam->patient_id);
        free(exam->rx_id);              
        free(exam);
    }
    
}

// Funcao para obter o id do exame
int get_exam_id(Exam *exam) {
    return exam->id; // Retorna o campo "id" do exame
}

// Funcao para obter o id do paciente associado ao exame
int get_exam_patient_id(Exam *exam) {
    return exam->patient_id; // Retorna o campo "patient_id" do exame
}

// Funcao para obter o Id do aparelho de raio-x associado ao exame
int get_exam_rx_id(Exam *exam) {
    return exam->rx_id; // Retorna o campo "rx_id" do exame
}

// Funcao para obter a data e hora do exame
struct tm* get_exam_time(Exam *exam) {
    return exam->time; // Retorna o campo "time" do exame
}