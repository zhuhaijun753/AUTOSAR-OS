/*
* Configuration of module: Os (Os_Cfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    HCS12
*
* Module vendor:           ArcCore
* Generator version:       2.0.34
*
* Generated by Arctic Studio (http://arccore.com) 
*/

	

#include "kernel.h"


// ###############################    EXTERNAL REFERENCES    #############################

/* Application externals */

/* Interrupt externals */


// Set the os tick frequency
OsTickType OsTickFreq = 250;


// ###############################    DEBUG OUTPUT     #############################
uint32 os_dbg_mask = 0;
 
// ###############################    APPLICATIONS     #############################
GEN_APPLICATION_HEAD = {
	GEN_APPLICATION(
				/* id           */ APPLICATION_ID_OsApplication1,
				/* name         */ "OsApplication1",
				/* trusted      */ true,	/* NOT CONFIGURABLE IN TOOLS */
				/* core         */ 0, /* Default value, multicore not enabled.*/
				/* StartupHook  */ NULL,
				/* ShutdownHook */ NULL,
				/* ErrorHook    */ NULL,
				/* rstrtTaskId  */ 0	/* NOT CONFIGURABLE IN TOOLS */
				),					
};
// #################################    COUNTERS     ###############################
GEN_COUNTER_HEAD = {
	GEN_COUNTER(	COUNTER_ID_Counter1,
					"Counter1",
					COUNTER_TYPE_HARD,
					COUNTER_UNIT_NANO,
					0xffff,
					1,
					1,
					0,
					APPLICATION_ID_OsApplication1,	/* Application owner */
					1	/* Accessing application mask */
				),
};

	CounterType Os_Arc_OsTickCounter = COUNTER_ID_Counter1;


// ##################################    ALARMS     ################################
GEN_ALARM_AUTOSTART(ALARM_ID_Alarm1, ALARM_AUTOSTART_RELATIVE, 100, 100, OSDEFAULTAPPMODE );
	

GEN_ALARM_HEAD = {
	GEN_ALARM(	ALARM_ID_Alarm1,
				"Alarm1",
				COUNTER_ID_Counter1,
				GEN_ALARM_AUTOSTART_NAME(ALARM_ID_Alarm1),
				ALARM_ACTION_SETEVENT,
				TASK_ID_eTask1,
				EVENT_MASK_Event1,
				0,
				APPLICATION_ID_OsApplication1,	/* Application owner */
				1	/* Accessing application mask */
			),
};

// ################################    RESOURCES     ###############################

// ##############################    STACKS (TASKS)     ############################

DECLARE_STACK(OsIdle,OS_OSIDLE_STACK_SIZE);

DECLARE_STACK(bTask3,384);
DECLARE_STACK(eTask1,384);
DECLARE_STACK(eTask2,384);

// ##################################    TASKS     #################################
GEN_TASK_HEAD = {
	GEN_BTASK(	/* 	        		*/OsIdle,
				/* name        		*/"OsIdle",
				/* priority    		*/0,
				/* schedule    		*/FULL,
				/* autostart   		*/TRUE,
				/* resource_int_p   */NULL,
				/* resource mask	*/0,
				/* activation lim. 	*/1,
				/* App owner    	*/0,
				/* Accessing apps   */1 
	),
	GEN_BTASK(
		/* 	        		*/bTask3,
		/* name        		*/"bTask3",
		/* priority    		*/1,
		/* schedule    		*/FULL,
		/* autostart   		*/FALSE,
		/* resource_int_p   */NULL,
		/* resource mask	*/0,
		/* activation lim. 	*/1,
		/* App owner    	*/APPLICATION_ID_OsApplication1,
		/* Accessing apps   */1
	),			
	GEN_ETASK(
		/* 	        		*/eTask1,
		/* name        		*/"eTask1",
		/* priority    		*/1,
		/* schedule 	   	*/FULL,
		/* name        		*/TRUE,
		/* resource_int_p   */NULL,
		/* resource mask	*/0,
		/* event mask		*/1,
		/* App owner    	*/APPLICATION_ID_OsApplication1,
		/* Accessing apps   */1
	),			
	GEN_ETASK(
		/* 	        		*/eTask2,
		/* name        		*/"eTask2",
		/* priority    		*/1,
		/* schedule 	   	*/FULL,
		/* name        		*/TRUE,
		/* resource_int_p   */NULL,
		/* resource mask	*/0,
		/* event mask		*/1,
		/* App owner    	*/APPLICATION_ID_OsApplication1,
		/* Accessing apps   */1
	),			
};

// ##################################    HOOKS     #################################
GEN_HOOKS( 
	StartupHook, 
	NULL, 
	ShutdownHook, 
	ErrorHook,
	PreTaskHook, 
	PostTaskHook 
);

// ##################################    ISRS     ##################################

GEN_ISR_MAP = {
	0
};

// ############################    SCHEDULE TABLES     #############################


