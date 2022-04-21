
   
#ifndef __Touchlesswash_H_
#define __Touchlesswash_H_

#define Sensor_ON 	(0x01)			/**< Sensor state HIGH */
#define Sensor_OFF	(0x00)			/**< Sensor state LOW */

#define Sensor_ON_TIME     (1000)  /**< Sensor ON time in milli seconds  */
#define Sensor_OFF_TIME    (500)   /**< Sensor OFF time in milli seconds */


#include "project_config.h"



void change_Sensor_state(uint8_t state);


#endif /** __Touchlesswash_H_ */
