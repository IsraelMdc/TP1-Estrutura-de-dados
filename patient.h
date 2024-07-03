#ifdef PATIENT_H
#define PATIENT_H

typedef struct  Patient;

void destroy_patient(struct Patient *patient);

int get_patient_id(struct Patient* patient);

const char get_patient_name(struct Patient* patient);

struct tm* get_patient_birthdate(struct Patient patient);


#endif // PATIENT_H