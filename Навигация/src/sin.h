
/*  ------------------------------------------------------
     Routine name:  sin
     Description:   
     Project file:  sins_computer_full.prt

------------------------------------------------------  */

/*  --- Base generator data types --- */
/* Real data type */
typedef double g_real_type;
/* Integer data type */
typedef int g_int_type;
/* Boolean data type */
typedef char g_boolean_type;
/* Complex data type */
typedef complex_64 g_complex_type;

typedef double  double_3[3];
typedef double  double_8[8];
typedef double  double_9[9];
typedef double  double_2[2];
typedef double  double_4[4];

/* Default initialization values */

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=1189214544;

const double_3 initangel_default={0.175,0.0873,0.262};
const double_3 gyroin_default={1,1,1};
const double_3 accelin_default={9.8,0,0};
const double_8 ctr_default={1,1,1,0.987196237785634,0.0808789073043519,0.0545010388153988,0.126221342185806,0};
const double_9 dcm_default={0.962195619089712,0.258026437200845,-0.0871891524789876,-0.240394499335479,0.955053550260135,0.173445094553739,0.128023729416894,-0.145928317474538,0.980976478242593};
const double_3 eulerangels_default={0.175,0.0873,0.262};
const double_2 pitch_roll_default={1.52564012624345,0};
const double_3 sinv1_out_0_default={0.175,0.0873,0.262};
const double_3 sinv2_out_0_default={1,1,1};
const double_3 sinv3_out_0_default={9.8,0,0};
const double_4 sinv5_out_0_default={0.987196237785634,0.0808789073043519,0.0545010388153988,0.126221342185806};
const double_4 sinv12_loct_default={0,0,0,0};
const double_4 sinv12_out_0_default={0.987196237785634,0.0808789073043519,0.0545010388153988,0.126221342185806};
const double_3 sinv15_out_0_default={0.175,0.0873,0.262};
const double_4 sinv18_out_0_default={-0.130800644152778,0.457737967207613,0.516269336333544,0.506787053137294};
const double_9 sinv19_out_0_default={0.962195619089712,0.258026437200845,-0.0871891524789876,-0.240394499335479,0.955053550260135,0.173445094553739,0.128023729416894,-0.145928317474538,0.980976478242593};
const double v5cosr_default=0.996174316800261;
const double v5sinr_default=0.0873883890887872;
const double v5cosp_default=0.99904749000097;
const double v5sinp_default=0.0436361400992574;
const double v5cosy_default=0.991431763812868;
const double v5siny_default=0.130625639531083;
const double v5w_default=0.987196237785634;
const double v5x_default=0.0808789073043519;
const double v5y_default=0.0545010388153988;
const double v5z_default=0.126221342185806;
const double_3 v5v5_sinit__func_res_0_default={0,0,0};
const double_4 v5v5_sinit__func_res_3_default={0,0,0,0};
const double v15mod_q_default=1;
const double v15q0_default=0.987196237785634;
const double v15q1_default=0.0808789073043519;
const double v15q2_default=0.0545010388153988;
const double v15q3_default=0.126221342185806;
const double_4 v15v15_sinit__func_res_0_default={0,0,0,0};
const double_3 v15v15_sinit__func_res_3_default={0,0,0};
const double_8 v18v18_sinit__func_res_0_default={0,0,0,0,0,0,0,0};
const double_4 v18v18_sinit__func_res_3_default={0,0,0,0};
const double v19q0_default=0.987196237785634;
const double v19q1_default=0.0808789073043519;
const double v19q2_default=0.0545010388153988;
const double v19q3_default=0.126221342185806;
const double_4 v19v19_sinit__func_res_0_default={0,0,0,0};
const double_9 v19v19_sinit__func_res_3_default={0,0,0,0,0,0,0,0,0};
const double sinv0_a_default=1;
const double sinv4_a_default=9.81;
const double sinv8_a_default=1;
const double sinv8_w_default=1;
const double sinv8_f_default=0;
const double sinv9_a_default=1;
const double_4 sinv12_tau_default={0.1,0.1,0.1,0.1};
const double_4 sinv12_k_default={1,1,1,1};
const double sinv16_a_default=1;
const double v8_out_0_default=1.52564012624345;

/* Main structures defines */
/* External variables count */
#define ext_vars_count 7
/* Internal state variables count */
#define state_vars_count 36
/* Constants count */
#define const_count 9
/* Local variables count */
#define local_count 7
/*  --- Source model preferences --- */
/* Minimum integration step */
#define INTEGRATION_MIN_STEP 0.02
/* Maximum integration step */
#define INTEGRATION_MAX_STEP 0.02
/* Model integration method */
#define INTEGRATION_METHOD 0
/* Model relative error */
#define INTEGRATION_RELATIVE_ERROR 0.0001
/* Model absolute error */
#define INTEGRATION_ABSOLUTE_ERROR 1E-6
/* Model end time */
#define INTEGRATION_END_TIME 10


#define initangel (*(double_3*)(ext_vars_addr[0]))
#define gyroin (*(double_3*)(ext_vars_addr[1]))
#define accelin (*(double_3*)(ext_vars_addr[2]))
#define ctr (*(double_8*)(ext_vars_addr[3]))
#define dcm (*(double_9*)(ext_vars_addr[4]))
#define eulerangels (*(double_3*)(ext_vars_addr[5]))
#define pitch_roll (*(double_2*)(ext_vars_addr[6]))

   typedef struct {
double_3 sinv1_out_0_;
double_3 sinv2_out_0_;
double_3 sinv3_out_0_;
double_4 sinv5_out_0_;
double_4 sinv12_loct_;
double_4 sinv12_out_0_;
double_3 sinv15_out_0_;
double_4 sinv18_out_0_;
double_9 sinv19_out_0_;
double v5cosr_;
double v5sinr_;
double v5cosp_;
double v5sinp_;
double v5cosy_;
double v5siny_;
double v5w_;
double v5x_;
double v5y_;
double v5z_;
double_3 v5v5_sinit__func_res_0_;
double_4 v5v5_sinit__func_res_3_;
double v15mod_q_;
double v15q0_;
double v15q1_;
double v15q2_;
double v15q3_;
double_4 v15v15_sinit__func_res_0_;
double_3 v15v15_sinit__func_res_3_;
double_8 v18v18_sinit__func_res_0_;
double_4 v18v18_sinit__func_res_3_;
double v19q0_;
double v19q1_;
double v19q2_;
double v19q3_;
double_4 v19v19_sinit__func_res_0_;
double_9 v19v19_sinit__func_res_3_;
   } t_state_vars;

   typedef struct {
double sinv0_a_;
double sinv4_a_;
double sinv8_a_;
double sinv8_w_;
double sinv8_f_;
double sinv9_a_;
double_4 sinv12_tau_;
double_4 sinv12_k_;
double sinv16_a_;
   } t_consts;
   typedef struct {
double v6_out_0_;
double v6_out_1_;
double v6_out_2_;
double v7_out_0_;
double v8_out_0_;
double_2 v11_out_0_;
double_8 v17_out_0_;
   } t_local;
