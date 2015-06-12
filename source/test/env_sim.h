/*
* File Name    : env_sim.h
* Discription  : 
* CreateAuthor : Haven Yang
* CreateDate   : 2015.6.11
*===============================================================================
* Modify Record:
*=============================================================================*/
#ifndef _ENV_SIM_H
#define _ENV_SIM_H

/*============================================================================*/
/* #include region: include std lib & other head file                         */
/*============================================================================*/

/*============================================================================*/
/* #define region: constant & MACRO defined here                              */
/*============================================================================*/

/*============================================================================*/
/* #typedef region: global data structure & data type typedefed here          */
/*============================================================================*/

/*============================================================================*/
/* function declaration region: declare global function prototype             */
/*============================================================================*/

U32 get_pmt_baseaddr(void);
U32 get_pbt_baseaddr(void);
U32 get_vbt_baseaddr(void);
U32 get_rpmt_baseaddr(void);
U32 get_puinfo_baseaddr(void);

#endif
/*====================End of this head file===================================*/

