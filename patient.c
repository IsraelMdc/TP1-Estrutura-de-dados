// Inclusao do arquivo de cabecalho "patient.h"
#include "patient.h" 

// Inclusao das bibliotecas necessarias
#include <stdio.h> 
#include <stdlib.h>    
#include <string.h>    
#include <time.h>      

// Definicao da estrutura "patient"
struct patient {
    int id;               // Identificador unico do paciente
    char* name;           // Nome do paciente
    struct tm *birthdate; // Ponteiro para a data de nascimento do paciente
    struct tm *arrival;   // Ponteiro para a data de chegada do paciente

};

// Funcao para criar um novo paciente
struct Patient* create_Patient(int id, const char* name, struct tm* birthdate, struct tm* arrival) {
    // Aloca memoria para um novo paciente
    struct patient* patient = (Patient*)malloc(sizeof(Patient));

    // Verifica se a alocacao de memoria foi bem-sucedida
    if (patient != NULL) { 
        // Inicializacao dos campos
        patient->id = id; 
        patient->name = strdup(name); 
        patient->birthdate = birthdate; 
        patient->arrival = arrival; 
    }

    return patient; // Retorna o ponteiro para o paciente criado
}

// Funcao para liberar a memoria do "patient"
void destroy_patient(Patient *patient) {
    // Verifica se o ponteiro nao e nulo
    if (patient != NULL) { 
        // Liberacao da memoria alocada para o paciente
        free(patient->name);        
        free(patient->birthdate);   
        free(patient->arrival);    
        free(patient);              
    }

}

// Funcao para obter o identificador do paciente
int get_patient_id(Patient* patient) {
    return patient->id; // Retorna o campo "id" do paciente

}

// Funcao para obter o nome do paciente
const char* get_patient_name(Patient* patient) {
    return patient->name; // Retorna o campo "name" do paciente

}

// Funcao para obter a data de nascimento do paciente
struct tm* get_patient_birthdate(Patient* patient) {
    return patient->birthdate; // Retorna o campo "birthdate" do paciente

}