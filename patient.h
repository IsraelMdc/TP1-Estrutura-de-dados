#ifndef PATIENT_H
#define PATIENT_H


//typedef for the patient struct in the h file
typedef struct patient Patient;

struct Patient* create_Patient(int id, const char* name, struct tm* birthdate, struct tm* arrival);

void destroy_patient(Patient *patient);

int get_patient_id(Patient* patient);

const char get_patient_name(Patient* patient);

struct tm* get_patient_birthdate(Patient patient);

#endif // PATIENT_HS