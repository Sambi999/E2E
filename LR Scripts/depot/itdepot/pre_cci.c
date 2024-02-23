# 1 "d:\\lr scripts\\depot\\itdepot\\\\combined_itdepot.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\lr scripts\\depot\\itdepot\\\\combined_itdepot.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\lr scripts\\depot\\itdepot\\\\combined_itdepot.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2



 
 



# 3 "d:\\lr scripts\\depot\\itdepot\\\\combined_itdepot.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "d:\\lr scripts\\depot\\itdepot\\\\combined_itdepot.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("supertails.com", 
		"URL=https://supertails.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "0");

	web_concurrent_start(0);

	web_url("index.js", 
		"URL=https://cdn.jsdelivr.net/npm/@growthbook/growthbook/dist/bundles/index.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t9.inf", 
		"LAST");

	web_url("styles.css", 
		"URL=https://supertails.com/cdn/shop/t/462/compiled_assets/styles.css?350736", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://supertails.com/", 
		"Snapshot=t10.inf", 
		"LAST");

	web_url("hs-lazysizes.min.js", 
		"URL=https://supertails.com/cdn/shop/t/462/assets/hs-lazysizes.min.js?v=125464727818452813991704672309", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t11.inf", 
		"LAST");

	web_url("hs-script-loader.min.js", 
		"URL=https://supertails.com/cdn/shop/t/462/assets/hs-script-loader.min.js?v=24912448706018637961671541276", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t12.inf", 
		"LAST");

	web_url("load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js", 
		"URL=https://supertails.com/cdn/shopifycloud/shopify/assets/storefront/load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t13.inf", 
		"LAST");

	web_url("hs-instantload.min.js", 
		"URL=https://supertails.com/cdn/shop/t/462/assets/hs-instantload.min.js?v=106803949153345037901696417335", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t14.inf", 
		"LAST");

	web_url("features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js", 
		"URL=https://supertails.com/cdn/shopifycloud/shopify/assets/storefront/features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t15.inf", 
		"LAST");

	web_url("preloads.js", 
		"URL=https://supertails.com/checkouts/internal/preloads.js?permanent-domain=supertail.myshopify.com&locale=en-IN", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t16.inf", 
		"LAST");

	web_url("scripts.js", 
		"URL=https://supertails.com/cdn/shop/t/462/compiled_assets/scripts.js?350736", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t17.inf", 
		"LAST");

	web_url("supertails-logo-for-dark-theme_200x_2x_59a36949-1934-4494-b180-9ff4bcb2cb35_230x.webp", 
		"URL=https://supertails.com/cdn/shop/files/supertails-logo-for-dark-theme_200x_2x_59a36949-1934-4494-b180-9ff4bcb2cb35_230x.webp?v=1659207740", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t18.inf", 
		"LAST");

	web_url("mixpanel-2-latest.min.js", 
		"URL=https://cdn.mxpnl.com/libs/mixpanel-2-latest.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t19.inf", 
		"LAST");

	web_url("clamp.js", 
		"URL=https://cdnjs.cloudflare.com/ajax/libs/clamp-js/0.7.0/clamp.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"LAST");

	web_url("slick.min.js", 
		"URL=https://cdnjs.cloudflare.com/ajax/libs/slick-carousel/1.8.1/slick.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t21.inf", 
		"LAST");

	web_url("Homepage_dekstop_fccc95a7-03d2-453a-bfb7-3785e4086ad8.png", 
		"URL=https://supertails.com/cdn/shop/files/Homepage_dekstop_fccc95a7-03d2-453a-bfb7-3785e4086ad8.png?v=1707633399", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t22.inf", 
		"LAST");

	web_url("Homepage_mob_7eed9398-c743-4e68-9898-8dacf0b6f71d.png", 
		"URL=https://supertails.com/cdn/shop/files/Homepage_mob_7eed9398-c743-4e68-9898-8dacf0b6f71d.png?v=1707633399", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t23.inf", 
		"LAST");

	web_url("grey_cross.png", 
		"URL=https://cdn.shopify.com/s/files/1/0565/8021/0861/files/grey_cross.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://supertails.com/", 
		"Snapshot=t24.inf", 
		"LAST");

	web_url("icegif-1262.gif", 
		"URL=https://cdn.shopify.com/s/files/1/0565/8021/0861/files/icegif-1262.gif?v=1698948197", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t25.inf", 
		"LAST");

	web_url("Frame_106723062_e6f33d18-0d46-4023-930b-e29aa3ded7bc.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723062_e6f33d18-0d46-4023-930b-e29aa3ded7bc.png?v=1706015942", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://supertails.com/", 
		"Snapshot=t26.inf", 
		"LAST");

	web_url("Frame_106722523_341c2208-30cd-4df8-9290-8c16afd1420f.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722523_341c2208-30cd-4df8-9290-8c16afd1420f.png?v=1703666692", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t27.inf", 
		"LAST");

	web_url("Frame_106722679_3232aec4-5e7e-42c0-97c3-420e45dc2ff1.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722679_3232aec4-5e7e-42c0-97c3-420e45dc2ff1.png?v=1703666636", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t28.inf", 
		"LAST");

	web_url("Frame_106722680_f5e4c28e-70e6-413f-905c-3639d76842e6.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722680_f5e4c28e-70e6-413f-905c-3639d76842e6.png?v=1703666636", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t29.inf", 
		"LAST");

	web_url("Frame_106722681_9f87d1aa-c8c6-40e3-86c5-efc4c6defbe9.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722681_9f87d1aa-c8c6-40e3-86c5-efc4c6defbe9.png?v=1703666637", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t30.inf", 
		"LAST");

	web_url("12th_feb_web_4-1.png", 
		"URL=https://supertails.com/cdn/shop/files/12th_feb_web_4-1.png?v=1707718004", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t31.inf", 
		"LAST");

	web_url("supertails-download-icon-min.png", 
		"URL=https://cdn.shopify.com/s/files/1/0565/8021/0861/files/supertails-download-icon-min.png?v=1692432165", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://supertails.com/", 
		"Snapshot=t32.inf", 
		"LAST");

	web_url("12th_feb_mob_4-1.png", 
		"URL=https://supertails.com/cdn/shop/files/12th_feb_mob_4-1.png?v=1707718004", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t33.inf", 
		"LAST");

	web_url("location_835c37da-c54c-4e45-9cd7-ee675397d1c3.png", 
		"URL=https://cdn.shopify.com/s/files/1/0565/8021/0861/files/location_835c37da-c54c-4e45-9cd7-ee675397d1c3.png?v=1699117839", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://supertails.com/", 
		"Snapshot=t34.inf", 
		"LAST");

	web_url("12th_feb_web_4-1_1600x.png", 
		"URL=https://supertails.com/cdn/shop/files/12th_feb_web_4-1_1600x.png?v=1707718004", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t35.inf", 
		"LAST");

	web_url("12th_feb_mob_4-1_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/12th_feb_mob_4-1_320x.png?v=1707718004", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t36.inf", 
		"LAST");

	web_url("9th_feb_web_2_1600x.png", 
		"URL=https://supertails.com/cdn/shop/files/9th_feb_web_2_1600x.png?v=1707718201", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t37.inf", 
		"LAST");

	web_url("9th_feb_mob_2_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/9th_feb_mob_2_320x.png?v=1707718201", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t38.inf", 
		"LAST");

	web_url("12th_feb_web_4_1600x.png", 
		"URL=https://supertails.com/cdn/shop/files/12th_feb_web_4_1600x.png?v=1707718004", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t39.inf", 
		"LAST");

	web_url("12th_feb_web_3_1600x.png", 
		"URL=https://supertails.com/cdn/shop/files/12th_feb_web_3_1600x.png?v=1707718004", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t40.inf", 
		"LAST");

	web_url("12th_feb_mob_3_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/12th_feb_mob_3_320x.png?v=1707718003", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t41.inf", 
		"LAST");

	web_url("12th_feb_mob_4_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/12th_feb_mob_4_320x.png?v=1707718004", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t42.inf", 
		"LAST");

	web_url("address_locked_1.png", 
		"URL=https://cdn.shopify.com/s/files/1/0565/8021/0861/files/address_locked_1.png?v=1699123389", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://supertails.com/", 
		"Snapshot=t43.inf", 
		"LAST");

	web_url("left-arrow.svg", 
		"URL=https://cdn.shopify.com/s/files/1/0565/8021/0861/files/left-arrow.svg?v=1699121219", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://supertails.com/", 
		"Snapshot=t44.inf", 
		"LAST");

	web_url("categories_52c8479c-3318-4f9c-8c6e-22c46140d720_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/categories_52c8479c-3318-4f9c-8c6e-22c46140d720_320x.png?v=1704701404", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t45.inf", 
		"LAST");

	web_url("12th_feb_web_3-1_1600x.png", 
		"URL=https://supertails.com/cdn/shop/files/12th_feb_web_3-1_1600x.png?v=1707718004", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t46.inf", 
		"LAST");

	web_url("12th_feb_mob_3-1_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/12th_feb_mob_3-1_320x.png?v=1707718003", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t47.inf", 
		"LAST");

	web_url("categories-1_acf513ca-2e51-4594-81f1-774aac7ac9d1_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/categories-1_acf513ca-2e51-4594-81f1-774aac7ac9d1_320x.png?v=1703666861", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t48.inf", 
		"LAST");

	web_url("categories-4_91417480-eecc-4ad9-a673-a414448added_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/categories-4_91417480-eecc-4ad9-a673-a414448added_320x.png?v=1703666861", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t49.inf", 
		"LAST");

	web_url("Group_3787_6d0903d1-2fff-48e1-8dcd-1fdfc2b89dde.png", 
		"URL=https://cdn.shopify.com/s/files/1/0565/8021/0861/files/Group_3787_6d0903d1-2fff-48e1-8dcd-1fdfc2b89dde.png?v=1688308640", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t50.inf", 
		"LAST");

	web_url("categories_f2bc06ae-791a-4a50-8821-d7654bde9ca7_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/categories_f2bc06ae-791a-4a50-8821-d7654bde9ca7_320x.png?v=1707305023", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t51.inf", 
		"LAST");

	web_url("location_black.png", 
		"URL=https://cdn.shopify.com/s/files/1/0565/8021/0861/files/location_black.png?v=1699107263", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://supertails.com/", 
		"Snapshot=t52.inf", 
		"LAST");

	web_concurrent_end(0);

	web_set_sockets_option("TLS_SNI", "1");

	lr_think_time(6);

	web_url("d53a7ae25db4fae6f39660963ca15934", 
		"URL=https://api.speedien.com/optimize/d53a7ae25db4fae6f39660963ca15934", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"LAST");

	web_concurrent_start(0);

	web_url("tagtag.min.js", 
		"URL=https://www.artfut.com/static/tagtag.min.js?campaign_code=9e84c8bfb6", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t54.inf", 
		"LAST");

	web_url("categories-2_4fdb6623-b175-4141-a06e-a36c793c65bf_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/categories-2_4fdb6623-b175-4141-a06e-a36c793c65bf_320x.png?v=1707121847", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t55.inf", 
		"LAST");

	web_url("categories-5_704f164b-7c3c-4dca-b73c-5cddacd739d8_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/categories-5_704f164b-7c3c-4dca-b73c-5cddacd739d8_320x.png?v=1703666861", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t56.inf", 
		"LAST");

	web_url("categories_dd6b1892-1ae8-40a8-8439-b0b3c6255401_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/categories_dd6b1892-1ae8-40a8-8439-b0b3c6255401_320x.png?v=1707121847", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t57.inf", 
		"LAST");

	web_url("categories-4_65aa2904-352e-4027-b5f6-a7e4d4023940_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/categories-4_65aa2904-352e-4027-b5f6-a7e4d4023940_320x.png?v=1706860488", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t58.inf", 
		"LAST");

	web_url("categories-1_4329dfdc-fa2c-4ebf-a24f-fbc4fb5e0efc_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/categories-1_4329dfdc-fa2c-4ebf-a24f-fbc4fb5e0efc_320x.png?v=1707121847", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t59.inf", 
		"LAST");

	web_url("categories_7f19785d-b4c5-4b99-9135-c026590eac43_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/categories_7f19785d-b4c5-4b99-9135-c026590eac43_320x.png?v=1707376356", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t60.inf", 
		"LAST");

	web_url("jquery.min.js", 
		"URL=https://apppartner.preciso.net/assets/js/jquery.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t61.inf", 
		"LAST");

	web_url("Group_4057_1.png", 
		"URL=https://cdn.shopify.com/s/files/1/0565/8021/0861/files/Group_4057_1.png?v=1688312125", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t62.inf", 
		"LAST");

	web_url("Group_4076_1_c38e0709-3815-421e-9741-6a83e400ac53.png", 
		"URL=https://cdn.shopify.com/s/files/1/0565/8021/0861/files/Group_4076_1_c38e0709-3815-421e-9741-6a83e400ac53.png?v=1688312231", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t63.inf", 
		"LAST");

	web_url("categories-3_caca9b0c-6dc7-4c2d-94ec-99bff192b8b7_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/categories-3_caca9b0c-6dc7-4c2d-94ec-99bff192b8b7_320x.png?v=1706860489", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t64.inf", 
		"LAST");

	web_url("categories-6_57952dec-ee37-4d08-b6f7-0de0734e218a_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/categories-6_57952dec-ee37-4d08-b6f7-0de0734e218a_320x.png?v=1706860489", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t65.inf", 
		"LAST");

	web_url("b07fb60babe54bdaaf7f3a60ab594f76.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/files/preview_images/b07fb60babe54bdaaf7f3a60ab594f76.thumbnail.0000000000_small.jpg?v=1704442339", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t66.inf", 
		"LAST");

	web_url("01d5ab67892c4073b9adf2f02fc3e61b.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/files/preview_images/01d5ab67892c4073b9adf2f02fc3e61b.thumbnail.0000000000_small.jpg?v=1704433452", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t67.inf", 
		"LAST");

	web_url("SC-1_a0850f29-c331-45a5-b403-4792bfcaa3e0.png", 
		"URL=https://supertails.com/cdn/shop/files/SC-1_a0850f29-c331-45a5-b403-4792bfcaa3e0.png?v=1707719101", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t68.inf", 
		"LAST");

	web_url("SC_6466c61e-f7ef-4531-8f18-bce5d549508f.png", 
		"URL=https://supertails.com/cdn/shop/files/SC_6466c61e-f7ef-4531-8f18-bce5d549508f.png?v=1707719101", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t69.inf", 
		"LAST");

	web_url("retag.js", 
		"URL=https://wd-ret.io/rtg/v1/retag.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t70.inf", 
		"LAST");

	web_url("SC-2_ad80901b-7fb3-4f0f-be7a-324b9a3d6b78.png", 
		"URL=https://supertails.com/cdn/shop/files/SC-2_ad80901b-7fb3-4f0f-be7a-324b9a3d6b78.png?v=1707719101", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t71.inf", 
		"LAST");

	web_url("SC-3_509add29-4a44-41b2-9f72-65ab0e9f7a0c.png", 
		"URL=https://supertails.com/cdn/shop/files/SC-3_509add29-4a44-41b2-9f72-65ab0e9f7a0c.png?v=1707719101", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t72.inf", 
		"LAST");

	web_url("Frame_106723066_e0f9dc07-8685-4049-8f0b-af77aa3d55f3.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723066_e0f9dc07-8685-4049-8f0b-af77aa3d55f3.png?v=1706787314", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t73.inf", 
		"LAST");

	web_url("Frame_106723067.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723067.png?v=1706787314", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t74.inf", 
		"LAST");

	web_url("Frame_106723065_f46a6bf3-2558-47c6-ad5d-97dbd0e6ad05.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723065_f46a6bf3-2558-47c6-ad5d-97dbd0e6ad05.png?v=1707132329", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t75.inf", 
		"LAST");

	web_url("Frame_106723062_c2c43965-1ff8-4d26-ac82-e6436ac8cac7.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723062_c2c43965-1ff8-4d26-ac82-e6436ac8cac7.png?v=1707132329", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t76.inf", 
		"LAST");

	web_url("Frame_106723063_8b80698d-0b0f-4d9e-871d-257f2dc68057.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723063_8b80698d-0b0f-4d9e-871d-257f2dc68057.png?v=1706787315", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t77.inf", 
		"LAST");

	web_url("Frame_106723107.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723107.png?v=1707117976", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t78.inf", 
		"LAST");

	web_url("shopify-boomerang-1.0.0.min.js", 
		"URL=https://supertails.com/cdn/shopifycloud/boomerang/shopify-boomerang-1.0.0.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t79.inf", 
		"LAST");

	web_url("Frame_106723106.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723106.png?v=1707117976", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t80.inf", 
		"LAST");

	web_url("Frame_106723064_70130d25-17f3-4152-90fd-6ea2dfa3650c.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723064_70130d25-17f3-4152-90fd-6ea2dfa3650c.png?v=1706787315", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t81.inf", 
		"LAST");

	web_url("Frame_106723108_996d267e-fc8e-4afe-8b32-12826e04bc37.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723108_996d267e-fc8e-4afe-8b32-12826e04bc37.png?v=1707119862", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t82.inf", 
		"LAST");

	web_url("supertails-logo-for-dark-theme_200x_2x_59a36949-1934-4494-b180-9ff4bcb2cb35_200x.webp", 
		"URL=https://supertails.com/cdn/shop/files/supertails-logo-for-dark-theme_200x_2x_59a36949-1934-4494-b180-9ff4bcb2cb35_200x.webp?v=1659207740", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t83.inf", 
		"LAST");

	web_url("Frame_106723109_91f88b3c-67d5-4240-a73e-f1bfd5d018f3.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723109_91f88b3c-67d5-4240-a73e-f1bfd5d018f3.png?v=1707120337", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t84.inf", 
		"LAST");

	web_url("Frame_106723110_0721e34e-0101-4191-bfce-4ce4ddfa34c6.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723110_0721e34e-0101-4191-bfce-4ce4ddfa34c6.png?v=1707120816", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t85.inf", 
		"LAST");

	web_concurrent_end(0);

	web_set_sockets_option("TLS_SNI", "0");

	

	web_concurrent_start(0);

	web_url("Frame_106723125_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723125_320x.png?v=1707719491", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t87.inf", 
		"LAST");

	web_url("Frame_106723121_27de6800-23f5-415b-a6e8-b57505cf068a_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723121_27de6800-23f5-415b-a6e8-b57505cf068a_320x.png?v=1707719491", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t88.inf", 
		"LAST");

	web_url("Frame_106723111_2f11c983-e636-4a46-a2a6-c6b91d67a64c.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723111_2f11c983-e636-4a46-a2a6-c6b91d67a64c.png?v=1707120840", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t89.inf", 
		"LAST");

	web_url("Frame_106723127_c8d83b97-4caf-49fa-a02c-e376b97f4b30_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723127_c8d83b97-4caf-49fa-a02c-e376b97f4b30_320x.png?v=1707719491", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t90.inf", 
		"LAST");

	web_url("Frame_106723124_ec19803e-4fc3-4f9f-8bdd-4f519036df32_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723124_ec19803e-4fc3-4f9f-8bdd-4f519036df32_320x.png?v=1707719491", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t91.inf", 
		"LAST");

	web_url("Frame_106723128_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723128_320x.png?v=1707719492", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t92.inf", 
		"LAST");

	web_url("Frame_106721401_f6d09f1f-1a7e-4289-9589-a287752533d3.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106721401_f6d09f1f-1a7e-4289-9589-a287752533d3.png?v=1703667837", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t93.inf", 
		"LAST");

	web_url("Frame_106722699_656b5874-efcc-4371-82fd-330c64c85240.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722699_656b5874-efcc-4371-82fd-330c64c85240.png?v=1703667837", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t94.inf", 
		"LAST");

	web_url("Frame_106723084.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723084.png?v=1707220413", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t95.inf", 
		"LAST");

	web_url("analytics.js", 
		"URL=https://supertails.com/cdn/shopifycloud/media-analytics/v0.1/analytics.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t96.inf", 
		"LAST");

	web_url("Frame_106723126_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723126_320x.png?v=1707719491", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t97.inf", 
		"LAST");

	web_url("cart.js", 
		"URL=https://supertails.com/cart.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t98.inf", 
		"LAST");

	web_url("Frame_106722701_0a51b5a5-817d-4bf2-8cf1-5bef4105f7d6.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722701_0a51b5a5-817d-4bf2-8cf1-5bef4105f7d6.png?v=1703667837", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t99.inf", 
		"LAST");

	web_url("Frame_106722531_da6596bb-87d9-41b6-a9f6-05cd52d7b165_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722531_da6596bb-87d9-41b6-a9f6-05cd52d7b165_320x.png?v=1703668080", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t100.inf", 
		"LAST");

	web_url("Frame_106723103.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723103.png?v=1707220413", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t101.inf", 
		"LAST");

	web_url("Frame_106722700_af237987-9042-4297-9dde-25588f3d3d9c.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722700_af237987-9042-4297-9dde-25588f3d3d9c.png?v=1703667838", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t102.inf", 
		"LAST");

	web_concurrent_end(0);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("tag.php", 
		"URL=https://wd-ret.io/rtg/v1/tr/tag.php", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"LAST");

	web_concurrent_start(0);

	web_url("Frame_106722530_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722530_320x.png?v=1703668080", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t104.inf", 
		"LAST");

	web_url("Frame_106722532_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722532_320x.png?v=1703668080", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t105.inf", 
		"LAST");

	web_url("Frame_106722534_8a191423-5357-489a-9283-b0535d84e44b_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722534_8a191423-5357-489a-9283-b0535d84e44b_320x.png?v=1703668080", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t106.inf", 
		"LAST");

	web_concurrent_end(0);

	web_custom_request("v3_2", 
		"URL=https://a.nel.cloudflare.com/report/v3?s=Fk4lbea78f2PIbJ1VriJQ1G%2FwybUoRrdA0wWpWj2dUi2GFtSecI2JQbOGC%2FbDo%2FcKHm%2F%2FgN5a%2FqPDj02vTfraMPCIHb9roVmo213GdaMvhM%2BviQ3leb4oZBBQnYW3z93", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":340,\"body\":{\"elapsed_time\":3500,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://supertails.com/\",\"sampling_fraction\":0.01,\"server_ip\":\"23.227.38.32\",\"status_code\":200,\"type\":\"ok\"},\"type\":\"network-error\",\"url\":\"https://supertails.com/cdn/shop/files/12th_feb_web_4-1.png?v=1707718004\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\"}]", 
		"LAST");

	web_concurrent_start(0);

	web_url("Frame_106722533_4134763f-d13d-47ad-b677-709934915a49_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722533_4134763f-d13d-47ad-b677-709934915a49_320x.png?v=1703668079", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t108.inf", 
		"LAST");

	web_url("Frame_106722535_d06400c8-20cd-48a9-9b3c-d84b6cde94d0_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722535_d06400c8-20cd-48a9-9b3c-d84b6cde94d0_320x.png?v=1703668080", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t109.inf", 
		"LAST");

	web_url("Des_3bdb7955-dfdf-41a2-b095-64bdf1a911a4_1600x.png", 
		"URL=https://supertails.com/cdn/shop/files/Des_3bdb7955-dfdf-41a2-b095-64bdf1a911a4_1600x.png?v=1707719857", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t110.inf", 
		"LAST");

	web_url("Frame_106723130_afa68cc9-bf30-4cc2-b05e-5326384ae6bb.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723130_afa68cc9-bf30-4cc2-b05e-5326384ae6bb.png?v=1707719857", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t111.inf", 
		"LAST");

	web_url("Frame_106723130_afa68cc9-bf30-4cc2-b05e-5326384ae6bb_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723130_afa68cc9-bf30-4cc2-b05e-5326384ae6bb_320x.png?v=1707719857", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t112.inf", 
		"LAST");

	web_url("Des_3bdb7955-dfdf-41a2-b095-64bdf1a911a4.png", 
		"URL=https://supertails.com/cdn/shop/files/Des_3bdb7955-dfdf-41a2-b095-64bdf1a911a4.png?v=1707719857", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t113.inf", 
		"LAST");

	web_url("Des-2_f37063d5-bc93-411a-ba80-ede72bd28080_1600x.png", 
		"URL=https://supertails.com/cdn/shop/files/Des-2_f37063d5-bc93-411a-ba80-ede72bd28080_1600x.png?v=1707719857", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t114.inf", 
		"LAST");

	web_url("Frame_14040_5feb6b28-f571-40c3-aa97-81fc7048b1e8_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_14040_5feb6b28-f571-40c3-aa97-81fc7048b1e8_320x.png?v=1707719857", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t115.inf", 
		"LAST");

	web_url("Frame_106723131_0b8b1e83-329e-45c8-b5ea-a83063842400_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723131_0b8b1e83-329e-45c8-b5ea-a83063842400_320x.png?v=1707719857", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t116.inf", 
		"LAST");

	web_url("Frame_106723129_5695dbdf-6cb8-4947-9dfd-4a44048e19fa_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723129_5695dbdf-6cb8-4947-9dfd-4a44048e19fa_320x.png?v=1707719857", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t117.inf", 
		"LAST");

	web_url("Des-1_569b79d6-a0df-416a-b88c-aa1132e35143_1600x.png", 
		"URL=https://supertails.com/cdn/shop/files/Des-1_569b79d6-a0df-416a-b88c-aa1132e35143_1600x.png?v=1707719857", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t118.inf", 
		"LAST");

	web_concurrent_end(0);

	web_custom_request("tag.php_2", 
		"URL=https://wd-ret.io/rtg/v1/tr/tag.php", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":[{\"event\":\"viewPage\",\"uxid\":\"b673e3c0-c88a-44fc-9e7f-63e0603513e8\",\"page\":\"https://supertails.com/\",\"device_type\":\"Windows\",\"uAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"referrer\":\"\"}]}", 
		"LAST");

	web_concurrent_start(0);

	web_url("Des-3_5430e1b2-81dd-42f0-9730-d0c996a35a2b.png", 
		"URL=https://supertails.com/cdn/shop/files/Des-3_5430e1b2-81dd-42f0-9730-d0c996a35a2b.png?v=1707720179", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t120.inf", 
		"LAST");

	web_url("Des-3_14828eea-1471-4e97-8995-cd50b5d43fb8_1600x.png", 
		"URL=https://supertails.com/cdn/shop/files/Des-3_14828eea-1471-4e97-8995-cd50b5d43fb8_1600x.png?v=1707719857", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t121.inf", 
		"LAST");

	web_url("Frame_13326_66121a80-8c4a-4b69-bc05-a0eed60018da.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_13326_66121a80-8c4a-4b69-bc05-a0eed60018da.png?v=1707720180", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t122.inf", 
		"LAST");

	web_url("Des-3_5430e1b2-81dd-42f0-9730-d0c996a35a2b_1600x.png", 
		"URL=https://supertails.com/cdn/shop/files/Des-3_5430e1b2-81dd-42f0-9730-d0c996a35a2b_1600x.png?v=1707720179", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t123.inf", 
		"LAST");

	web_url("Frame_13326_66121a80-8c4a-4b69-bc05-a0eed60018da_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_13326_66121a80-8c4a-4b69-bc05-a0eed60018da_320x.png?v=1707720180", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t124.inf", 
		"LAST");

	web_url("Des_c8958493-49b9-43e2-95f9-aaf6f8a69cd0_1600x.png", 
		"URL=https://supertails.com/cdn/shop/files/Des_c8958493-49b9-43e2-95f9-aaf6f8a69cd0_1600x.png?v=1707720179", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t125.inf", 
		"LAST");

	web_url("Frame_13046_ba37d638-0902-4fe5-ad25-71497a37bdf4_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_13046_ba37d638-0902-4fe5-ad25-71497a37bdf4_320x.png?v=1707720179", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t126.inf", 
		"LAST");

	web_url("Des-1_dd6a6f53-27ce-448e-82a8-b16f49b7c59f_1600x.png", 
		"URL=https://supertails.com/cdn/shop/files/Des-1_dd6a6f53-27ce-448e-82a8-b16f49b7c59f_1600x.png?v=1707720179", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t127.inf", 
		"LAST");

	web_url("Frame_13354_e9c26237-b838-4836-a4c4-4029081069ff_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_13354_e9c26237-b838-4836-a4c4-4029081069ff_320x.png?v=1707720179", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t128.inf", 
		"LAST");

	web_url("Frame_13182_bd7b9ca6-997c-4f7c-9945-1cc65d9f9f35_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_13182_bd7b9ca6-997c-4f7c-9945-1cc65d9f9f35_320x.png?v=1707720179", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t129.inf", 
		"LAST");

	web_url("Des-2_cbbf23e2-27b2-47d1-ba00-11dc70edbb88_1600x.png", 
		"URL=https://supertails.com/cdn/shop/files/Des-2_cbbf23e2-27b2-47d1-ba00-11dc70edbb88_1600x.png?v=1707720179", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t130.inf", 
		"LAST");

	web_url("Frame_106722943_e6b7901c-9e1b-4cdc-90f1-b0b96b9ffba2.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722943_e6b7901c-9e1b-4cdc-90f1-b0b96b9ffba2.png?v=1705486612", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t131.inf", 
		"LAST");

	web_url("Frame_106722941_898a962e-d330-4c6f-a8e5-e4ffab757cc8.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722941_898a962e-d330-4c6f-a8e5-e4ffab757cc8.png?v=1705486611", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t132.inf", 
		"LAST");

	web_url("Frame_106722942_8df3c743-5cc6-4097-9c2b-ca115801368a.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722942_8df3c743-5cc6-4097-9c2b-ca115801368a.png?v=1705486612", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t133.inf", 
		"LAST");

	web_url("Frame_106722944_262714e6-bcf3-416f-bf20-41ae3f500c48.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722944_262714e6-bcf3-416f-bf20-41ae3f500c48.png?v=1705486612", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t134.inf", 
		"LAST");

	web_url("Frame_106722945_e1af794d-0f0c-408c-a541-b4dbcdd37214.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722945_e1af794d-0f0c-408c-a541-b4dbcdd37214.png?v=1705486611", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t135.inf", 
		"LAST");

	web_url("Frame_106722946_bb5d4f37-38c2-407f-8b97-98d1d178d85d.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106722946_bb5d4f37-38c2-407f-8b97-98d1d178d85d.png?v=1705486612", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t136.inf", 
		"LAST");

	web_concurrent_end(0);

	

	web_concurrent_start(0);

	web_url("Frame_106723240_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723240_320x.png?v=1707720740", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t138.inf", 
		"LAST");

	web_url("Frame_106723239_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723239_320x.png?v=1707720740", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t139.inf", 
		"LAST");

	web_url("Frame_106723241_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723241_320x.png?v=1707720740", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t140.inf", 
		"LAST");

	web_url("Frame_106723109_03eb8485-2e7e-47ec-ae18-09846241fca8_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723109_03eb8485-2e7e-47ec-ae18-09846241fca8_320x.png?v=1707456749", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t141.inf", 
		"LAST");

	web_url("Frame_106723242_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723242_320x.png?v=1707720740", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t142.inf", 
		"LAST");

	web_url("Frame_106723243_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723243_320x.png?v=1707720740", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t143.inf", 
		"LAST");

	web_url("Frame_106723115_f1a07428-d98f-4c97-af96-c8385f82a938_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723115_f1a07428-d98f-4c97-af96-c8385f82a938_320x.png?v=1707720904", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t144.inf", 
		"LAST");

	web_url("Frame_106723116_001e134a-84eb-4fef-b875-0dfc0e895153_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723116_001e134a-84eb-4fef-b875-0dfc0e895153_320x.png?v=1707721009", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t145.inf", 
		"LAST");

	web_url("Frame_106723117_8b72b6e1-f4c3-40ff-a375-3a5b0169ae57_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723117_8b72b6e1-f4c3-40ff-a375-3a5b0169ae57_320x.png?v=1707721047", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t146.inf", 
		"LAST");

	web_url("Frame_106723119_a8be5379-9fe4-4840-8f56-dc748db75b4d_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723119_a8be5379-9fe4-4840-8f56-dc748db75b4d_320x.png?v=1707721133", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t147.inf", 
		"LAST");

	web_concurrent_end(0);

	web_custom_request("command_2", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=I76XEoEoSqxhEjiZ7akd2w%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t148.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x17sambismart005@gmail.com\\x10c\\x18\\x02*\\xCD\\x02\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x12\\x08\\xDE\\xD8\\x12\\x12\\x0C \\x00x\\x00\\x80\\x01\\x9F\\xD1\\xD5\\xF1\\xD912\\x89\\x01\\x08\\x9A\\xB7\t\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_di\\x12\\x0551!di\\x1A\\x12\t \\x81\\xA4(-\\x11\\x06\\x00\\x11 \\x81\\xA4(-\\x11\\x06\\x00)4\\x88\\xA5(-\\x11\\x06\\x00\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t"
		"\\x00W\\x14#-\\x11\\x06\\x00\\x11\\x00W\\x14#-\\x11\\x06\\x00)\\xFF\\x7F\\xA4(-\\x11\\x06\\x000\\x80\\xAE\\xD1\\x98\\xD2\\xA5\\x84\\x032\\x89\\x01\\x08\\xFC\\xDE$\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_st\\x12\\x0551!st\\x1A\\x12\t \\x81\\xA4(-\\x11\\x06\\x00\\x11 \\x81\\xA4(-\\x11\\x06\\x00)B\\x88\\xA5(-\\x11\\x06\\x00\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00W\\x14#-\\x11\\x06\\x00\\x11\\x00W\\x14#-\\x11\\x06\\x00)\\xFF\\x7F\\xA4"
		"(-\\x11\\x06\\x000\\x80\\xAE\\xD1\\x98\\xD2\\xA5\\x84\\x032\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xCF\\xCF\\x80\\x83\\x92\\xCD\\xD4\\xB4\\x01@\\x00H\\x04:%z00000157-2da7-5740-0000-000057da890cR\\x16\n\\x0E\\x12\\x0C8\\x00@\\x00R\\x04\\x08\\x00\\x10\\x00`\\x07\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.161 (8e23a63b5dead78825bec5ef48f4aeb5698ce21a-refs/branch-heads/6167@{#1764}) channel(stable),gzip(gfe)b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		"LAST");

	web_concurrent_start(0);

	web_url("Frame_10129.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_10129.png?v=1694587314", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t149.inf", 
		"LAST");

	web_url("Frame_106723120_ef3f596a-cf4a-4119-9d47-dcf46e60d20d_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723120_ef3f596a-cf4a-4119-9d47-dcf46e60d20d_320x.png?v=1707721109", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t150.inf", 
		"LAST");

	web_url("Frame_106723118_9e5274cc-012c-4607-9a2a-3eb66ff86cf6_320x.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_106723118_9e5274cc-012c-4607-9a2a-3eb66ff86cf6_320x.png?v=1707721169", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t151.inf", 
		"LAST");

	web_url("Frame_10132.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_10132.png?v=1694587314", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t152.inf", 
		"LAST");

	web_url("Frame_10133w424q42.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_10133w424q42.png?v=1694586993", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://supertails.com/", 
		"Snapshot=t153.inf", 
		"LAST");

	web_url("Frame_10128.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_10128.png?v=1694587314", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://supertails.com/", 
		"Snapshot=t154.inf", 
		"LAST");

	web_url("Frame_10131.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_10131.png?v=1694587314", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t155.inf", 
		"LAST");

	web_url("Frame_10130.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_10130.png?v=1694587314", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t156.inf", 
		"LAST");

	web_url("Group_2773.png", 
		"URL=https://supertails.com/cdn/shop/files/Group_2773.png?v=1695618845", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t157.inf", 
		"LAST");

	web_url("Group_2772.png", 
		"URL=https://supertails.com/cdn/shop/files/Group_2772.png?v=1695618954", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t158.inf", 
		"LAST");

	web_url("Frame_3421_12f12999-3318-4c4a-9068-45cff809345f.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_3421_12f12999-3318-4c4a-9068-45cff809345f.png?v=1695720851", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t159.inf", 
		"LAST");

	web_url("Group_4229_3d723e4e-27fa-4ce4-b6c2-56682ff10eaa.png", 
		"URL=https://supertails.com/cdn/shop/files/Group_4229_3d723e4e-27fa-4ce4-b6c2-56682ff10eaa.png?v=1695980153", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/", 
		"Snapshot=t160.inf", 
		"LAST");

	web_url("Frame_3422_e205fb91-99db-4b85-9e13-c81a036d1520.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame_3422_e205fb91-99db-4b85-9e13-c81a036d1520.png?v=1695720885", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t161.inf", 
		"LAST");

	web_url("Group_20941.png", 
		"URL=https://supertails.com/cdn/shop/files/Group_20941.png?v=1695619093", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/", 
		"Snapshot=t162.inf", 
		"LAST");

	web_url("vendor-scripts-v2.js", 
		"URL=https://supertails.com/cdn/shop/t/462/assets/vendor-scripts-v2.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t163.inf", 
		"LAST");

	web_url("theme.min.js", 
		"URL=https://supertails.com/cdn/shop/t/462/assets/theme.min.js?v=91467896959605846531703576350", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t164.inf", 
		"LAST");

	web_url("theme.css", 
		"URL=https://supertails.com/cdn/shop/t/462/assets/theme.css?v=183583349992002004451707740698", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://supertails.com/", 
		"Snapshot=t165.inf", 
		"LAST");

	web_url("hs-image-blur.css", 
		"URL=https://supertails.com/cdn/shop/t/462/assets/hs-image-blur.css?v=157208600979694062561671541274", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://supertails.com/", 
		"Snapshot=t166.inf", 
		"LAST");

	web_concurrent_end(0);

	web_url("cart", 
		"URL=https://supertails.com/cart?t=1707755775444&view=ajax", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		"LAST");

	web_concurrent_start(0);

	web_url("cart.js_2", 
		"URL=https://supertails.com/cart.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t168.inf", 
		"LAST");

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNjESQwkBiUPBoavHdhIFDZFhlU4SBQ2RYZVOEgUNkWGVThIFDZFhlU4SBQ2RYZVOEgUNkWGVThIFDW20psMh786jVyAfkrkSdAnHnZ2el8pT_xIFDe66YLISBQ0KL69bEgUNCraalxIFDZ2dBBYSBQ2FNqbVEgUNXcPU9xIFDXU0g18SBQ3INL7GEgUNdTSDXxIFDcg0vsYSBQ3PCdnREgUNfJnu3hIFDc8J", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNjESQwkBiUPBoavHdhIFDZFhlU4SBQ2RYZVOEgUNkWGVThIFDZFhlU4SBQ2RYZVOEgUNkWGVThIFDW20psMh786jVyAfkrkSdAnHnZ2el8pT_xIFDe66YLISBQ0KL69bEgUNCraalxIFDZ2dBBYSBQ2FNqbVEgUNXcPU9xIFDXU0g18SBQ3INL7GEgUNdTSDXxIFDcg0vsYSBQ3PCdnREgUNfJnu3hIFDc8J2dESBQ18me7eIUdYN1QnbOdzEjUJ4oLBaT1sQe8SBQ22JnkEEgUNY2GwghIFDXVtCQgSBQ2DqFs9EgUN2yz9fiEP1fH956be4g==?alt=proto", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t169.inf", 
		"LAST");

	web_url("b2dad7dd6w8794fdd7p7676799am6905778bm.js", 
		"URL=https://supertails.com/cdn/wpm/b2dad7dd6w8794fdd7p7676799am6905778bm.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t170.inf", 
		"LAST");

	web_concurrent_end(0);

	web_url("modern", 
		"URL=https://supertails.com/wpm@2dad7dd6w8794fdd7p7676799am6905778b/web-pixel-shopify-custom-pixel@0575/sandbox/modern/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"LAST");

	web_concurrent_start(0);

	web_url("worker.modern.js", 
		"URL=https://supertails.com/wpm@2dad7dd6w8794fdd7p7676799am6905778b/web-pixel-shopify-app-pixel@0575/sandbox/worker.modern.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t172.inf", 
		"LAST");

	web_url("ptag.js", 
		"URL=https://cdn.preciso.net/aud/clientjs/ptag.js?3317", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t173.inf", 
		"LAST");

	web_url("segment.js", 
		"URL=https://wd-ret.io/rtg/v1/js/segment/segment.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t174.inf", 
		"LAST");

	web_url("fbevents.js", 
		"URL=https://connect.facebook.net/en_US/fbevents.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t175.inf", 
		"LAST");

	web_concurrent_end(0);

	web_custom_request("audience.php", 
		"URL=https://wd-ret.io/rtg/v1/track/audience/audience.php", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("7f975a56c761db6506eca0b37ce6ec87.js", 
		"URL=https://wd-ret.io/rtg/v1/tr/7f975a56c761db6506eca0b37ce6ec87.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t177.inf", 
		"LAST");

	web_custom_request("audience.php_2", 
		"URL=https://wd-ret.io/rtg/v1/track/audience/audience.php", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"fingerprintID\":-45902929,\"data\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"screenSize\":\"1280x720x24\",\"language\":\"en-GB\"}}", 
		"LAST");

	web_concurrent_start(0);

	web_url("tracking.min.js", 
		"URL=https://www.artfut.com/static/tracking.min.js?campaign_code=9e84c8bfb6", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t179.inf", 
		"LAST");

	web_url("crossdevice.min.js", 
		"URL=https://www.artfut.com/static/crossdevice.min.js?campaign_code=9e84c8bfb6", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t180.inf", 
		"LAST");

	web_url("main-min-preciso.js", 
		"URL=https://cdn.preciso.net/aud/shopify/main-min-preciso.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://supertails.com/", 
		"Snapshot=t181.inf", 
		"LAST");

	web_concurrent_end(0);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("track", 
		"URL=https://api-js.mixpanel.com/track/?verbose=1&ip=1&_=1707755777733", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://supertails.com/", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		"Body=data="
		"%5B%0A%20%20%20%20%7B%22event%22%3A%20%22Page%20View%22%2C%22properties%22%3A%20%7B%22%24os%22%3A%20%22Windows%22%2C%22%24browser%22%3A%20%22Chrome%22%2C%22%24current_url%22%3A%20%22https%3A%2F%2Fsupertails.com%2F%22%2C%22%24browser_version%22%3A%20121%2C%22%24screen_height%22%3A%20720%2C%22%24screen_width%22%3A%201280%2C%22mp_lib%22%3A%20%22web%22%2C%22%24lib_version%22%3A%20%222.49.0%22%2C%22%24insert_id%22%3A%20%22nri0997cxuu74fri%22%2C%22time%22%3A%201707755775.459%2C%22distinct_id%22%3A%20%22"
		"%24device%3A18d9e2d1bbc24a5-0648fa325f9333-26001851-e1000-18d9e2d1bbc24a5%22%2C%22%24device_id%22%3A%20%2218d9e2d1bbc24a5-0648fa325f9333-26001851-e1000-18d9e2d1bbc24a5%22%2C%22%24initial_referrer%22%3A%20%22%24direct%22%2C%22%24initial_referring_domain%22%3A%20%22%24direct%22%2C%22Page%20URL%22%3A%20%22%2F%22%2C%22Title%22%3A%20%22Online%20Pet%20Store%2C%20Shop%20Pet%20Supplies%20and%20Products%3A%20Supertails%22%2C%22token%22%3A%20%22d5d290378d17a0b6634101925944f6a0%22%2C%22mp_sent_by_lib_version"
		"%22%3A%20%222.49.0%22%7D%7D%0A%5D", 
		"LAST");

	web_add_cookie("__seg=; DOMAIN=supertails.com");

	web_concurrent_start(0);

	web_url("trekkie.storefront.a0a07daed3df64bc141ebd704f9608fcc6496227.min.js", 
		"URL=https://supertails.com/cdn/s/trekkie.storefront.a0a07daed3df64bc141ebd704f9608fcc6496227.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t183.inf", 
		"LAST");

	web_url("shop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js", 
		"URL=https://supertails.com/cdn/shopifycloud/shopify/assets/shop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t184.inf", 
		"LAST");

	web_url("tr", 
		"URL=https://www.facebook.com/tr/?id=7188557817849442&ev=PageView&dl=https%3A%2F%2Fsupertails.com%2F&rl=&if=false&ts=1707755778201&sw=1280&sh=720&v=2.9.145&r=stable&ec=0&o=4126&fbp=fb.1.1707755778200.1946307489&ler=empty&cdl=API_unavailable&it=1707755777498&coo=false&exp=e1&rqm=GET", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://supertails.com/", 
		"Snapshot=t185.inf", 
		"LAST");

	web_url("3317.js", 
		"URL=https://cdn.preciso.net/aud/clientjs/3317.js?", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://supertails.com/", 
		"Snapshot=t186.inf", 
		"LAST");

	web_url("trigger", 
		"URL=https://www.facebook.com/privacy_sandbox/pixel/register/trigger/?id=7188557817849442&ev=PageView&dl=https%3A%2F%2Fsupertails.com%2F&rl=&if=false&ts=1707755778201&sw=1280&sh=720&v=2.9.145&r=stable&ec=0&o=4126&fbp=fb.1.1707755778200.1946307489&ler=empty&cdl=API_unavailable&it=1707755777498&coo=false&exp=e1&rqm=FGET", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://supertails.com/", 
		"Snapshot=t187.inf", 
		"LAST");

	web_url("css", 
		"URL=https://fonts.googleapis.com/css?family=Poppins:300", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://supertails.com/", 
		"Snapshot=t188.inf", 
		"LAST");

	web_url("analytics.js_2", 
		"URL=https://www.google-analytics.com/analytics.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t189.inf", 
		"LAST");

	web_url("4332.js", 
		"URL=https://cdn.preciso.net/aud/clientjs/4332.js?&t=1", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://supertails.com/", 
		"Snapshot=t190.inf", 
		"LAST");

	web_concurrent_end(0);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_cookie("_fbp=fb.1.1707755778200.1946307489; DOMAIN=supertails.com");

	web_add_cookie("_shopify_sa_t=2024-02-12T16%3A36%3A18.426Z; DOMAIN=supertails.com");

	web_add_cookie("_shopify_sa_p=; DOMAIN=supertails.com");

	web_custom_request("produce_batch", 
		"URL=https://supertails.com/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://supertails.com/", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1707755777542},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\""
		"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-9e2d5bd7-F0BA-4ACB-2E84-3BFAC7D6451A\"},\"metadata\":{\"event_created_at_ms\":1707755777029}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.435\",\"page_url\":\"https://supertails.com/\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\""
		"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":652,\"start_time\":12900,\"session_id\":\"f7c993a8-cb9e-4dca-8137-d9a3e15345fd\"},\"metadata\":{\"event_created_at_ms\":1707755777030}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\""
		"page_url\":\"https://supertails.com/\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-9e2d5bd7-F0BA-4ACB-2E84-3BFAC7D6451A\"},\"metadata\":{\"event_created_at_ms\":1707755777053"
		"}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.435\",\"page_url\":\"https://supertails.com/\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\""
		"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":676,\"start_time\":12898,\"session_id\":\"f7c993a8-cb9e-4dca-8137-d9a3e15345fd\"},\"metadata\":{\"event_created_at_ms\":1707755777054}}]}", 
		"LAST");

	web_custom_request("produce_batch_2", 
		"URL=https://supertails.com/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://supertails.com/", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1707755776989},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1707755776367}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/\",\"shop_id\""
		":56580210861,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1707755776373}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\""
		"unknown\",\"event_id\":\"sh-9e2d5bd7-F0BA-4ACB-2E84-3BFAC7D6451A\"},\"metadata\":{\"event_created_at_ms\":1707755776377}}]}", 
		"LAST");

	web_url("299470.js", 
		"URL=https://in.fw-cdn.com/30542696/299470.js?shop=supertail.myshopify.com", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t193.inf", 
		"LAST");

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=1258107516&t=pageview&_s=1&dl=https%3A%2F%2Fsupertails.com%2F&dp=%2F&ul=en-gb&de=UTF-8&dt=Online%20Pet%20Store%2C%20Shop%20Pet%20Supplies%20and%20Products%3A%20Supertails&sd=24-bit&sr=1280x720&vp=1280x593&je=0&_u=YGBAgEABBAAAACgCIAB~&jid=1191216959&gjid=838583824&cid=601222388.1707755780&tid=UA-199191056-1&_gid=1470224811.1707755780&_slc=1&did=BwiEti&z=27286377", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://supertails.com/", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"LAST");

	web_concurrent_start(0);

	web_url("added_product_cart.js", 
		"URL=https://d1ggrngj0uwslm.cloudfront.net/fm_adhoc_scripts/added_product_cart.js?shop=supertail.myshopify.com", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t195.inf", 
		"LAST");

	web_url("sealsubscriptions.js", 
		"URL=https://cdn-app.sealsubscriptions.com/shopify/public/js/sealsubscriptions.js?shop=supertail.myshopify.com", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t196.inf", 
		"LAST");

	web_url("viewed_product.js", 
		"URL=https://d1ggrngj0uwslm.cloudfront.net/fm_adhoc_scripts/viewed_product.js?shop=supertail.myshopify.com", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t197.inf", 
		"LAST");

	web_url("cffOrderifyLoader_min.js", 
		"URL=https://d3g420rgevyqxw.cloudfront.net/cffOrderifyLoader_min.js?shop=supertail.myshopify.com", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t198.inf", 
		"LAST");

	web_concurrent_end(0);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_url("features", 
		"URL=https://app.getmodemagic.com/api/features?shop=supertail&path=%2F&domain=supertails.com&app=modemagic&thankyou=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://supertails.com/", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("cookiematch.aspx", 
		"URL=https://ck.2trk.info/rtb/google/cookiematch.aspx?id=preciso_srl&cok15=pos_ssc_in&cnty15=IND&ProgramName=supertailscom_IN&AudienceId=4332&CampaignId=63891&Referrer=https%253A%2F%2Fsupertails.com%2F&pagetype=home&Browsercheck=true&a15=false&dw15=false&google_error=3", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t200.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("_ga=GA1.2.601222388.1707755780; DOMAIN=supertails.com");

	web_add_cookie("_gid=GA1.2.1470224811.1707755780; DOMAIN=supertails.com");

	web_add_cookie("_gat=1; DOMAIN=supertails.com");

	web_add_cookie("_fw_crm_v=690b2bfd-2cde-469a-be00-b781e332b3bc; DOMAIN=supertails.com");

	web_add_cookie("first_session=%7B%22visits%22%3A1%2C%22start%22%3A1707755781200%2C%22last_visit%22%3A1707755781200%2C%22url%22%3A%22https%3A%2F%2Fsupertails.com%2F%22%2C%22path%22%3A%22%2F%22%2C%22referrer%22%3A%22%22%2C%22referrer_info%22%3A%7B%22host%22%3A%22%22%2C%22path%22%3A%22blank%22%2C%22protocol%22%3A%22about%3A%22%2C%22port%22%3A80%2C%22search%22%3A%22%22%2C%22query%22%3A%7B%7D%7D%2C%22search%22%3A%7B%22engine%22%3Anull%2C%22query%22%3Anull%7D%2C%22version%22%3A0.4%7D; DOMAIN=supertails.com");

	web_custom_request("produce_batch_3", 
		"URL=https://supertails.com/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://supertails.com/", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1707755778404},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":56580210861},\"metadata\":{\"event_created_at_ms\":1707755778404}}]}", 
		"LAST");

	web_custom_request("produce_batch_4", 
		"URL=https://supertails.com/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://supertails.com/", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1707755778425},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"\",\"path\":\"/\",\"search\":\"\",\"title\":\"Online Pet Store, Shop Pet Supplies and Products: Supertails\",\"url\":\"https://supertails.com/\",\"properties\":{},\"eventId\":\"sh-9e2d5bd7-F0BA-4ACB-2E84-3BFAC7D6451A\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"pageType\":\"home\""
		",\"shopId\":56580210861,\"isMerchantRequest\":null,\"themeId\":136442478830,\"themeCityHash\":\"3887147263678788455\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"d1de568a-7413-4fac-8053-1ada308849b4\",\"visitToken\":\"4930a38c-568d-4b20-8813-3c4d97e4c48d\",\"microSessionId\":\"9e2d6bb0-E167-4408-7702-25EB5BD5C7C2\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1707755778425}}]}", 
		"LAST");

	web_custom_request("produce_batch_5", 
		"URL=https://supertails.com/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://supertails.com/", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1707755778428},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-9e2d5bd7-F0BA-4ACB-2E84-3BFAC7D6451A\",\"referrer\":\"\",\"canonical_url\":\"https://supertails.com/\",\"event_name\":\"page_rendered\",\"shop_id\":56580210861,\"facebook_pixel_id\":\"463371158516871\",\"facebook_capi_enabled\":true,\"event_time\":1707755778427,\"event_source_url\":\"https://supertails.com/\",\"unique_token\":\""
		"d1de568a-7413-4fac-8053-1ada308849b4\",\"page_id\":\"9e2d6bb0-E167-4408-7702-25EB5BD5C7C2\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"is_persistent_cookie\":true,\"deprecated_visit_token\":\""
		"4930a38c-568d-4b20-8813-3c4d97e4c48d\",\"session_id\":\"sh-9e2d6be0-91A2-464C-9146-2E1F28D6B114\",\"asset_version_id\":\"a0a07daed3df64bc141ebd704f9608fcc6496227\"},\"metadata\":{\"event_created_at_ms\":1707755778428}}]}", 
		"LAST");

	web_url("cookiematch.aspx_2", 
		"URL=https://ck.2trk.info/rtb/google/cookiematch.aspx?id=preciso_srl&cok15=pou_ssc_in&cnty15=IND&ProgramName=SUPERTAILS_IN&AudienceId=3317&CampaignId=64117&Referrer=https%253A%2F%2Fsupertails.com%2F&PageType=home&Browsercheck=true&a15=false&dw15=false&google_error=3", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch_6", 
		"URL=https://supertails.com/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://supertails.com/", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1707755778428},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"a0a07daed3df64bc141ebd704f9608fcc6496227\",\"page_url\":\"https://supertails.com/\",\"app_name\":\"storefront\",\"shop_id\":56580210861,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1707755778406}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\""
		":56580210861,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"d1de568a-7413-4fac-8053-1ada308849b4\",\"visit_token\":\"4930a38c-568d-4b20-8813-3c4d97e4c48d\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"463371158516871\",\"event_properties\":\"{}\",\"event_id\":\"sh-9e2d5bd7-F0BA-4ACB-2E84-3BFAC7D6451A\"},\"metadata\":{\"event_created_at_ms\":1707755778426}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":56580210861,\""
		"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"d1de568a-7413-4fac-8053-1ada308849b4\",\"visit_token\":\"4930a38c-568d-4b20-8813-3c4d97e4c48d\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-199191056-1\",\"event_properties\":\"{\\\"page\\\":\\\"/\\\",\\\"title\\\":\\\"Online Pet Store, Shop Pet Supplies and Products: Supertails\\\",\\\"location\\\":\\\"https://supertails.com/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1707755778426}},{\"schema_id\""
		":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":56580210861,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"d1de568a-7413-4fac-8053-1ada308849b4\",\"visit_token\":\"4930a38c-568d-4b20-8813-3c4d97e4c48d\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"GT-TNC369M\",\"event_properties\":\"{\\\"send_to\\\":\\\"MC-R2XPZM26TN\\\",\\\"page_path\\\":\\\"/\\\",\\\"page_title\\\":\\\"Online Pet Store, Shop Pet Supplies and Products: Supertails\\\","
		"\\\"page_location\\\":\\\"https://supertails.com/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1707755778427}}]}", 
		"LAST");

	web_concurrent_start(0);

	web_url("supertail.myshopify.com.js", 
		"URL=https://cdn-app.sealsubscriptions.com/shopify/public/status/shop/supertail.myshopify.com.js?1707755781", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t206.inf", 
		"LAST");

	web_url("sealsubscriptions-main.js", 
		"URL=https://cdn-app.sealsubscriptions.com/shopify/public/js/sealsubscriptions-main.js?shop=supertail.myshopify.com&1707746902c", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t207.inf", 
		"LAST");

	web_url("seal-ac-module.js", 
		"URL=https://cdn-app.sealsubscriptions.com/shopify/public/js/seal-ac-module.js?shop=supertail.myshopify.com&1707746902c", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t208.inf", 
		"LAST");

	web_concurrent_end(0);

	web_url("dog-products", 
		"URL=https://supertails.com/pages/dog-products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t209.inf", 
		"Mode=HTML", 
		"LAST");

	web_concurrent_start(0);

	web_url("style.css", 
		"URL=https://cdn-app.sealsubscriptions.com/shopify/public/css/style.css?shop=supertail.myshopify.com&1707746902c", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://supertails.com/", 
		"Snapshot=t210.inf", 
		"LAST");

	web_url("pagefly-main.css", 
		"URL=https://supertails.com/cdn/shop/t/462/assets/pagefly-main.css?v=163357880656688441791689273972", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://supertails.com/", 
		"Snapshot=t211.inf", 
		"LAST");

	web_url("dwn.svg", 
		"URL=https://cdn-app.sealsubscriptions.com/shopify/public/img/app/dwn.svg?v2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://supertails.com/", 
		"Snapshot=t212.inf", 
		"LAST");

	web_url("pagefly.c5e6c2a1.css", 
		"URL=https://supertails.com/cdn/shop/t/462/assets/pagefly.c5e6c2a1.css?v=144357161873407839241707730956", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t213.inf", 
		"LAST");

	web_url("preloads.js_2", 
		"URL=https://supertails.com/checkouts/internal/preloads.js?permanent-domain=supertail.myshopify.com&locale=en-IN", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t214.inf", 
		"LAST");

	web_concurrent_end(0);

	web_custom_request("produce_batch_7", 
		"URL=https://supertails.com/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://supertails.com/", 
		"Snapshot=t215.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1707755787114},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"f7c993a8-cb9e-4dca-8137-d9a3e15345fd\",\"run_time_duration\":3932,\"start_time\":9643,\"page_duration\""
		":13992},\"metadata\":{\"event_created_at_ms\":1707755787114}}]}", 
		"LAST");

	web_concurrent_start(0);

	web_url("Frame1-2022-10-03T121538.612-403788.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-10-03T121538.612-403788.png?v=1696545978", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t216.inf", 
		"LAST");

	web_url("defd560d35434a2283402fa48ad30f2f.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/products/defd560d35434a2283402fa48ad30f2f.thumbnail.0000000000_small.jpg?v=1665136770", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t217.inf", 
		"LAST");

	web_url("Frame1-2022-10-03T121553.896-144184.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-10-03T121553.896-144184.png?v=1696545991", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t218.inf", 
		"LAST");

	web_url("Frame17-450024.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame17-450024.png?v=1696545986", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t219.inf", 
		"LAST");

	web_url("Frame1-2022-10-03T121618.579-404331.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-10-03T121618.579-404331.png?v=1696545996", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t220.inf", 
		"LAST");

	web_concurrent_end(0);

	web_url("d53a7ae25db4fae6f39660963ca15934_2", 
		"URL=https://api.speedien.com/optimize/d53a7ae25db4fae6f39660963ca15934", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t221.inf", 
		"Mode=HTML", 
		"LAST");

	web_concurrent_start(0);

	web_url("Frame1-2022-10-03T121607.528-325215.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-10-03T121607.528-325215.png?v=1696546000", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t222.inf", 
		"LAST");

	web_url("Frame1-2022-10-03T121814.849-173377.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-10-03T121814.849-173377.png?v=1696546004", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t223.inf", 
		"LAST");

	web_url("Frame1-2022-10-03T121854.751-761460.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-10-03T121854.751-761460.png?v=1696546013", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t224.inf", 
		"LAST");

	web_url("Frame825.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame825.png?v=1698746399", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t225.inf", 
		"LAST");

	web_url("Frame1-2022-10-03T121741.475-401204.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-10-03T121741.475-401204.png?v=1696546009", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t226.inf", 
		"LAST");

	web_url("2_092b3e1f-6837-4e6c-9820-bff59fc860d0-715805.png", 
		"URL=https://supertails.com/cdn/shop/products/2_092b3e1f-6837-4e6c-9820-bff59fc860d0-715805.png?v=1696546018", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t227.inf", 
		"LAST");

	web_url("tagtag.min.js_2", 
		"URL=https://www.artfut.com/static/tagtag.min.js?campaign_code=9e84c8bfb6", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://supertails.com/", 
		"Snapshot=t228.inf", 
		"LAST");

	web_url("Frame824.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame824.png?v=1698746398", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t229.inf", 
		"LAST");

	web_url("Frame823.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame823.png?v=1698746399", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t230.inf", 
		"LAST");

	web_url("Frame823_7d29ba94-7173-4259-9c1a-b8e2037c4e03.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame823_7d29ba94-7173-4259-9c1a-b8e2037c4e03.png?v=1700030084", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t231.inf", 
		"LAST");

	web_url("defd560d35434a2283402fa48ad30f2f.thumbnail.0000000000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/defd560d35434a2283402fa48ad30f2f.thumbnail.0000000000.jpg?v=1665136770", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t232.inf", 
		"LAST");

	web_url("Frame69-426544.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame69-426544.png?v=1696545522", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t233.inf", 
		"LAST");

	web_url("Frame70-118122.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame70-118122.png?v=1696545537", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t234.inf", 
		"LAST");

	web_url("Frame10683_391f3821-f9b4-4ca5-92f1-7d6e0b027ddc.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10683_391f3821-f9b4-4ca5-92f1-7d6e0b027ddc.png?v=1701149832", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t235.inf", 
		"LAST");

	web_url("8902522423d54aa781989e5f38df075c.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/products/8902522423d54aa781989e5f38df075c.thumbnail.0000000000_small.jpg?v=1665492405", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t236.inf", 
		"LAST");

	web_url("d4826ee3c1f74b57bac8d4fec4f636eb.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/products/d4826ee3c1f74b57bac8d4fec4f636eb.thumbnail.0000000000_small.jpg?v=1665492401", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t237.inf", 
		"LAST");

	web_url("Frame1-2022-10-31T134921.718-155764.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-10-31T134921.718-155764.png?v=1696545633", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t238.inf", 
		"LAST");

	web_url("Frame10684_0cfb4773-6d58-42e1-a0ab-6787dbc82f5b.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10684_0cfb4773-6d58-42e1-a0ab-6787dbc82f5b.png?v=1701149832", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t239.inf", 
		"LAST");

	web_url("Frame1-2022-10-31T134815.691-569326.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-10-31T134815.691-569326.png?v=1696545624", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t240.inf", 
		"LAST");

	web_url("Frame211.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame211.png?v=1698389797", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t241.inf", 
		"LAST");

	web_url("Frame212.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame212.png?v=1698389796", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t242.inf", 
		"LAST");

	web_concurrent_end(0);

	web_url("features_2", 
		"URL=https://app.getmodemagic.com/api/features?shop=supertail&path=%2Fpages%2Fdog-products&domain=supertails.com&app=modemagic&thankyou=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://supertails.com/", 
		"Snapshot=t243.inf", 
		"Mode=HTML", 
		"LAST");

	web_concurrent_start(0);

	web_url("Frame106722567_de0ac6b2-def1-420a-a8a3-92a3c6ba4bff.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame106722567_de0ac6b2-def1-420a-a8a3-92a3c6ba4bff.png?v=1702538417", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t244.inf", 
		"LAST");

	web_url("Frame106722566_23077cec-18fa-40b8-8fe4-b4d3c825475a.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame106722566_23077cec-18fa-40b8-8fe4-b4d3c825475a.png?v=1702538418", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t245.inf", 
		"LAST");

	web_url("Frame210.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame210.png?v=1698389795", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t246.inf", 
		"LAST");

	web_url("Frame213.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame213.png?v=1698389795", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t247.inf", 
		"LAST");

	web_url("d4826ee3c1f74b57bac8d4fec4f636eb.thumbnail.0000000000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/d4826ee3c1f74b57bac8d4fec4f636eb.thumbnail.0000000000.jpg?v=1665492401", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t248.inf", 
		"LAST");

	web_url("Frame1-2021-11-12T132551.475_1.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2021-11-12T132551.475_1.png?v=1696545190", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t249.inf", 
		"LAST");

	web_url("Frame_1_-_2022-05-12T171508.792-removebg-preview_2-852687.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame_1_-_2022-05-12T171508.792-removebg-preview_2-852687.png?v=1696545196", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t250.inf", 
		"LAST");

	web_url("8902522423d54aa781989e5f38df075c.thumbnail.0000000000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/8902522423d54aa781989e5f38df075c.thumbnail.0000000000.jpg?v=1665492405", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t251.inf", 
		"LAST");

	web_url("afd1e8b3405b4c48bd3587424885fc66.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/products/afd1e8b3405b4c48bd3587424885fc66.thumbnail.0000000000_small.jpg?v=1665493310", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t252.inf", 
		"LAST");

	web_url("Frame_1_-_2022-05-12T171504.536-removebg-preview-464408.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame_1_-_2022-05-12T171504.536-removebg-preview-464408.png?v=1696545192", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t253.inf", 
		"LAST");

	web_url("shopify-boomerang-1.0.0.min.js_2", 
		"URL=https://supertails.com/cdn/shopifycloud/boomerang/shopify-boomerang-1.0.0.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t254.inf", 
		"LAST");

	web_concurrent_end(0);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("produce", 
		"URL=https://monorail-edge.shopifysvc.com/v1/produce", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://supertails.com/", 
		"Snapshot=t255.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"schema_id\":\"online_store_buyer_site_abandonment/1.1\",\"payload\":{\"shop_id\":56580210861,\"url\":\"https://supertails.com/\",\"navigation_start\":1707755763479,\"duration\":23634,\"session_token\":\"4930a38c-568d-4b20-8813-3c4d97e4c48d\",\"page_type\":\"index\"},\"metadata\":{\"event_created_at_ms\":1707755787113,\"event_sent_at_ms\":1707755787113}}", 
		"LAST");

	web_concurrent_start(0);

	web_url("172cd9b2c4f546d2a984286a075367d7.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/products/172cd9b2c4f546d2a984286a075367d7.thumbnail.0000000000_small.jpg?v=1665493308", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t256.inf", 
		"LAST");

	web_url("afd1e8b3405b4c48bd3587424885fc66.thumbnail.0000000000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/afd1e8b3405b4c48bd3587424885fc66.thumbnail.0000000000.jpg?v=1665493310", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t257.inf", 
		"LAST");

	web_url("Frame185_ff7ca7ad-444e-4965-a53e-020abd503439.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame185_ff7ca7ad-444e-4965-a53e-020abd503439.png?v=1698386375", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t258.inf", 
		"LAST");

	web_url("Frame186.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame186.png?v=1698386375", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t259.inf", 
		"LAST");

	web_url("172cd9b2c4f546d2a984286a075367d7.thumbnail.0000000000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/172cd9b2c4f546d2a984286a075367d7.thumbnail.0000000000.jpg?v=1665493308", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t260.inf", 
		"LAST");

	web_url("Frame1-2021-11-12T140014.849_1.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2021-11-12T140014.849_1.png?v=1684584438", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t261.inf", 
		"LAST");

	web_url("61U045nK6eS._SX522.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61U045nK6eS._SX522.jpg?v=1684584438", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t262.inf", 
		"LAST");

	web_url("61nF_Jkt1IS._SX522.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61nF_Jkt1IS._SX522.jpg?v=1684584438", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t263.inf", 
		"LAST");

	web_url("61ElT30J0DS._SX522.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61ElT30J0DS._SX522.jpg?v=1684584438", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t264.inf", 
		"LAST");

	web_url("61daKgIrvbS._SX522.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61daKgIrvbS._SX522.jpg?v=1684584438", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t265.inf", 
		"LAST");

	web_url("da49fc14a708440184c332cde4e7c20f.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/products/da49fc14a708440184c332cde4e7c20f.thumbnail.0000000000_small.jpg?v=1665492880", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t266.inf", 
		"LAST");

	web_url("81W81x4khfS._SX522.jpg", 
		"URL=https://supertails.com/cdn/shop/products/81W81x4khfS._SX522.jpg?v=1684584438", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t267.inf", 
		"LAST");

	web_url("277761cfcebb4a71b15345d79a574f97.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/products/277761cfcebb4a71b15345d79a574f97.thumbnail.0000000000_small.jpg?v=1665492887", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t268.inf", 
		"LAST");

	web_url("Frame10690.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10690.png?v=1701150563", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t269.inf", 
		"LAST");

	web_url("Frame10689.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10689.png?v=1701150564", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t270.inf", 
		"LAST");

	web_url("277761cfcebb4a71b15345d79a574f97.thumbnail.0000000000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/277761cfcebb4a71b15345d79a574f97.thumbnail.0000000000.jpg?v=1665492887", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t271.inf", 
		"LAST");

	web_url("da49fc14a708440184c332cde4e7c20f.thumbnail.0000000000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/da49fc14a708440184c332cde4e7c20f.thumbnail.0000000000.jpg?v=1665492880", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t272.inf", 
		"LAST");

	web_url("Frame6_4e76b525-5082-4b95-a9a8-76be695fe027_1.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame6_4e76b525-5082-4b95-a9a8-76be695fe027_1.jpg?v=1696563926", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t273.inf", 
		"LAST");

	web_url("Frame5_3_7d53cbfa-3e1a-4aa1-846a-0ff0a8018c74-840590.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame5_3_7d53cbfa-3e1a-4aa1-846a-0ff0a8018c74-840590.jpg?v=1696563928", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t274.inf", 
		"LAST");

	web_url("OutwardHoundFunFeederSlo-bowlminislowfeeder-Orange.jpg", 
		"URL=https://supertails.com/cdn/shop/products/OutwardHoundFunFeederSlo-bowlminislowfeeder-Orange.jpg?v=1686547065", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t275.inf", 
		"LAST");

	web_url("Frame2_34_db319f0a-7bce-43db-860a-ceda94a1baad-351924.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame2_34_db319f0a-7bce-43db-860a-ceda94a1baad-351924.jpg?v=1696563931", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t276.inf", 
		"LAST");

	web_url("Frame3_22-988388.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame3_22-988388.jpg?v=1696563934", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t277.inf", 
		"LAST");

	web_url("Frame4_10_430a3008-9a6d-4e58-b306-9d66dd6ac86c-780620.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame4_10_430a3008-9a6d-4e58-b306-9d66dd6ac86c-780620.jpg?v=1696563936", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t278.inf", 
		"LAST");

	web_url("51001-03-67831_3-463126.jpg", 
		"URL=https://supertails.com/cdn/shop/products/51001-03-67831_3-463126.jpg?v=1696563941", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t279.inf", 
		"LAST");

	web_url("3f1631880f8d4013ae29992a55a0f993.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/products/3f1631880f8d4013ae29992a55a0f993.thumbnail.0000000000_small.jpg?v=1675153316", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t280.inf", 
		"LAST");

	web_url("Frame10204_29_a0ceab39-cf33-4dd3-8e15-04727d615d74-951044.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_29_a0ceab39-cf33-4dd3-8e15-04727d615d74-951044.jpg?v=1696563939", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t281.inf", 
		"LAST");

	web_url("65fb53ae31da422bb2d53c068aecf1f8.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/products/65fb53ae31da422bb2d53c068aecf1f8.thumbnail.0000000000_small.jpg?v=1675153592", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t282.inf", 
		"LAST");

	web_url("bowlandfeeders_1_7146e96e-a080-4a0c-98c4-52cc3f4031b8.png", 
		"URL=https://supertails.com/cdn/shop/files/bowlandfeeders_1_7146e96e-a080-4a0c-98c4-52cc3f4031b8.png?v=1707203547", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t283.inf", 
		"LAST");

	web_url("3f1631880f8d4013ae29992a55a0f993.thumbnail.0000000000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/3f1631880f8d4013ae29992a55a0f993.thumbnail.0000000000.jpg?v=1675153316", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t284.inf", 
		"LAST");

	web_url("65fb53ae31da422bb2d53c068aecf1f8.thumbnail.0000000000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/65fb53ae31da422bb2d53c068aecf1f8.thumbnail.0000000000.jpg?v=1675153592", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t285.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T125856.197-866765.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T125856.197-866765.png?v=1706102720", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t286.inf", 
		"LAST");

	web_url("Frame25_49757376-cfa4-43ca-8e20-22ab13279b7a.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame25_49757376-cfa4-43ca-8e20-22ab13279b7a.png?v=1706102720", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t287.inf", 
		"LAST");

	web_concurrent_end(0);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("tag.php_3", 
		"URL=https://wd-ret.io/rtg/v1/tr/tag.php", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t288.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":[{\"event\":\"viewPage\",\"uxid\":\"83af75a9-d105-404c-af80-aa045edc118d\",\"page\":\"https://supertails.com/pages/dog-products\",\"device_type\":\"Windows\",\"uAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"referrer\":\"https://supertails.com/\"}]}", 
		"LAST");

	web_concurrent_start(0);

	web_url("Frame2_35-139640.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame2_35-139640.jpg?v=1706102720", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t289.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T125825.157-706907.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T125825.157-706907.png?v=1706102720", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t290.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T125803.440-957649.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T125803.440-957649.png?v=1706102720", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t291.inf", 
		"LAST");

	web_url("Frame5_3_ff0de11b-ef22-48d5-8f27-167e7f521d80-556847.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame5_3_ff0de11b-ef22-48d5-8f27-167e7f521d80-556847.jpg?v=1706102720", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t292.inf", 
		"LAST");

	web_url("Frame10204_30-555356.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_30-555356.jpg?v=1706102720", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t293.inf", 
		"LAST");

	web_url("25ea129a55e045e3b5828ff8397398f0.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/products/25ea129a55e045e3b5828ff8397398f0.thumbnail.0000000000_small.jpg?v=1675153555", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t294.inf", 
		"LAST");

	web_url("Frame10204_29_9ece622c-c687-450a-9fb8-9d073147776f-544243.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_29_9ece622c-c687-450a-9fb8-9d073147776f-544243.jpg?v=1706102720", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t295.inf", 
		"LAST");

	web_url("bowlandfeeders_1_ac3e39f3-c2a4-4dbe-a318-3bbc3b371ca5.png", 
		"URL=https://supertails.com/cdn/shop/files/bowlandfeeders_1_ac3e39f3-c2a4-4dbe-a318-3bbc3b371ca5.png?v=1707203645", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t296.inf", 
		"LAST");

	web_url("ca588042411546068f93e6cd0cb61f8e.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/products/ca588042411546068f93e6cd0cb61f8e.thumbnail.0000000000_small.jpg?v=1675153262", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t297.inf", 
		"LAST");

	web_url("ca588042411546068f93e6cd0cb61f8e.thumbnail.0000000000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/ca588042411546068f93e6cd0cb61f8e.thumbnail.0000000000.jpg?v=1675153262", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t298.inf", 
		"LAST");

	web_url("Frame-2023-07-26T110550.616-349807.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame-2023-07-26T110550.616-349807.png?v=1696564115", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t299.inf", 
		"LAST");

	web_url("Frame-2023-07-26T110554.643-858518.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame-2023-07-26T110554.643-858518.png?v=1696564209", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t300.inf", 
		"LAST");

	web_url("Frame-2023-07-26T110600.132-821461.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame-2023-07-26T110600.132-821461.png?v=1696564168", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t301.inf", 
		"LAST");

	web_url("c0f45fdb6eef431aa571bad374cfa98f.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/products/c0f45fdb6eef431aa571bad374cfa98f.thumbnail.0000000000_small.jpg?v=1675149421", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t302.inf", 
		"LAST");

	web_url("25ea129a55e045e3b5828ff8397398f0.thumbnail.0000000000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/25ea129a55e045e3b5828ff8397398f0.thumbnail.0000000000.jpg?v=1675153555", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t303.inf", 
		"LAST");

	web_url("Frame-2023-07-26T110606.322-741878.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame-2023-07-26T110606.322-741878.png?v=1696564213", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t304.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T141353.712-583329.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T141353.712-583329.png?v=1696564223", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t305.inf", 
		"LAST");

	web_url("Frame-2023-07-26T110603.273-804947.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame-2023-07-26T110603.273-804947.png?v=1696564218", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t306.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T141120.112-159287.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T141120.112-159287.png?v=1696564232", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t307.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T141204.868-703435.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T141204.868-703435.png?v=1696564237", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t308.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T141102.246-446588.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T141102.246-446588.png?v=1696564227", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t309.inf", 
		"LAST");

	web_url("cart.js_3", 
		"URL=https://supertails.com/cart.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t310.inf", 
		"LAST");

	web_url("c0f45fdb6eef431aa571bad374cfa98f.thumbnail.0000000000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/c0f45fdb6eef431aa571bad374cfa98f.thumbnail.0000000000.jpg?v=1675149421", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t311.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T141338.886-956778.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T141338.886-956778.png?v=1696564248", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t312.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T141134.433-763179.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T141134.433-763179.png?v=1696564286", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t313.inf", 
		"LAST");

	web_url("DTOBT0001OH_1_1.jpg", 
		"URL=https://supertails.com/cdn/shop/products/DTOBT0001OH_1_1.jpg?v=1683109655", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t314.inf", 
		"LAST");

	web_url("Frame1_72_1.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_72_1.png?v=1683109655", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t315.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T114753.157-784019.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T114753.157-784019.png?v=1696563915", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t316.inf", 
		"LAST");

	web_url("outwardhound-511770.jpg", 
		"URL=https://supertails.com/cdn/shop/products/outwardhound-511770.jpg?v=1696563874", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t317.inf", 
		"LAST");

	web_url("Frame1-2022-06-14T122128.315-490814.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-14T122128.315-490814.png?v=1696563881", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t318.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T114923.796-119605.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T114923.796-119605.png?v=1696563921", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t319.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T114938.255-507162.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T114938.255-507162.png?v=1696563886", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t320.inf", 
		"LAST");

	web_concurrent_end(0);

	web_url("cart_2", 
		"URL=https://supertails.com/cart?t=1707755791523&view=ajax", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t321.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=60694780-1526-4730-8845-7707119cb417; DOMAIN=supertails.com");

	web_concurrent_start(0);

	web_url("3f3155d1462a4403992aa11b22438a66.thumbnail.0000000000_small.jpg", 
		"URL=https://supertails.com/cdn/shop/products/3f3155d1462a4403992aa11b22438a66.thumbnail.0000000000_small.jpg?v=1675153694", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t322.inf", 
		"LAST");

	web_url("3f3155d1462a4403992aa11b22438a66.thumbnail.0000000000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/3f3155d1462a4403992aa11b22438a66.thumbnail.0000000000.jpg?v=1675153694", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t323.inf", 
		"LAST");

	web_url("softtoys_258bc615-ea12-4611-8a1e-443cbfb6b132.png", 
		"URL=https://supertails.com/cdn/shop/files/softtoys_258bc615-ea12-4611-8a1e-443cbfb6b132.png?v=1707388542", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t324.inf", 
		"LAST");

	web_url("Frame_40_63d095d1-1b59-4ba3-b4e6-0df45dff673d-895393.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame_40_63d095d1-1b59-4ba3-b4e6-0df45dff673d-895393.png?v=1696563723", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t325.inf", 
		"LAST");

	web_url("Frame_38_fbb4ba56-4327-45cd-9a27-b7cb3abdce5c-415074.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame_38_fbb4ba56-4327-45cd-9a27-b7cb3abdce5c-415074.png?v=1696563737", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t326.inf", 
		"LAST");

	web_url("Frame_41_359f6c23-4c81-4d0a-b9d3-0822b4784c63-278723.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame_41_359f6c23-4c81-4d0a-b9d3-0822b4784c63-278723.png?v=1696563731", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t327.inf", 
		"LAST");

	web_url("Frame_39_93f9f403-5b7a-4e4c-954f-693de1cd1ca7-836621.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame_39_93f9f403-5b7a-4e4c-954f-693de1cd1ca7-836621.png?v=1696563744", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t328.inf", 
		"LAST");

	web_url("Frame_37_94093515-576c-49b5-a6e0-cc732c87a221-800071.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame_37_94093515-576c-49b5-a6e0-cc732c87a221-800071.png?v=1696563751", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t329.inf", 
		"LAST");

	web_url("Frame_36_c3861076-9b33-46b4-830b-11e7a01e7407-665644.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame_36_c3861076-9b33-46b4-830b-11e7a01e7407-665644.png?v=1696563755", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t330.inf", 
		"LAST");

	web_url("bowlandfeeders_1_847438d2-30ce-4085-ab66-7b7a44fda555.png", 
		"URL=https://supertails.com/cdn/shop/files/bowlandfeeders_1_847438d2-30ce-4085-ab66-7b7a44fda555.png?v=1707203604", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t331.inf", 
		"LAST");

	web_url("11_2_1_1-959276.png", 
		"URL=https://supertails.com/cdn/shop/products/11_2_1_1-959276.png?v=1696563758", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t332.inf", 
		"LAST");

	web_url("cart.js_4", 
		"URL=https://supertails.com/cart.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t333.inf", 
		"LAST");

	web_url("Frame1-2022-02-07T140633.303_1.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-02-07T140633.303_1.png?v=1687426946", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t334.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T113349.764-612002.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T113349.764-612002.png?v=1696564559", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t335.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T113404.090-787153.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T113404.090-787153.png?v=1696564564", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t336.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T113434.637-387016.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T113434.637-387016.png?v=1696564577", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t337.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T113420.376-749400.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T113420.376-749400.png?v=1696564573", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t338.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T113527.601-342589.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T113527.601-342589.png?v=1696564583", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t339.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T113544.915-160017.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T113544.915-160017.png?v=1696564588", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t340.inf", 
		"LAST");

	web_url("Frame1-2022-02-07T140633.303-910955.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-02-07T140633.303-910955.png?v=1696564598", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t341.inf", 
		"LAST");

	web_url("Frame1-2022-06-09T113611.133-538634.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-09T113611.133-538634.png?v=1696564594", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t342.inf", 
		"LAST");

	web_concurrent_end(0);

	web_add_cookie("__seg=7caa701b2bd5a182b80c72b9bdf88e2d; DOMAIN=supertails.com");

	web_url("dog-products_2", 
		"URL=https://supertails.com/wpm@2dad7dd6w8794fdd7p7676799am6905778b/web-pixel-shopify-custom-pixel@0575/sandbox/modern/pages/dog-products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t343.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("audience.php_3", 
		"URL=https://wd-ret.io/rtg/v1/track/audience/audience.php", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t344.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"fingerprintID\":-45902929,\"data\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"screenSize\":\"1280x720x24\",\"language\":\"en-GB\"}}", 
		"LAST");

	web_url("dog-biscuits-cookies", 
		"URL=https://supertails.com/collections/dog-biscuits-cookies", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t345.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=35cef775-d6a3-435a-9ef6-29b85d596004; DOMAIN=supertails.com");

	web_url("dog-treats", 
		"URL=https://supertails.com/collections/dog-treats", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t346.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("preloads.js_3", 
		"URL=https://supertails.com/checkouts/internal/preloads.js?permanent-domain=supertail.myshopify.com&locale=en-IN", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t347.inf", 
		"LAST");

	web_url("d53a7ae25db4fae6f39660963ca15934_3", 
		"URL=https://api.speedien.com/optimize/d53a7ae25db4fae6f39660963ca15934", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t348.inf", 
		"Mode=HTML", 
		"LAST");

	web_concurrent_start(0);

	web_url("Frame3_84-231797.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame3_84-231797.png?v=1696532931", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t349.inf", 
		"LAST");

	web_url("Frame3_82-262856.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame3_82-262856.png?v=1696532934", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t350.inf", 
		"LAST");

	web_url("Frame3_81-206347.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame3_81-206347.png?v=1696532938", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t351.inf", 
		"LAST");

	web_url("Frame3_83-529969.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame3_83-529969.png?v=1696532941", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t352.inf", 
		"LAST");

	web_concurrent_end(0);

	web_custom_request("track_2", 
		"URL=https://api-js.mixpanel.com/track/?verbose=1&ip=1&_=1707755794362", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://supertails.com/", 
		"Snapshot=t353.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=data="
		"%5B%0A%20%20%20%20%7B%22event%22%3A%20%22Page%20View%22%2C%22properties%22%3A%20%7B%22%24os%22%3A%20%22Windows%22%2C%22%24browser%22%3A%20%22Chrome%22%2C%22%24referrer%22%3A%20%22https%3A%2F%2Fsupertails.com%2F%22%2C%22%24referring_domain%22%3A%20%22supertails.com%22%2C%22%24current_url%22%3A%20%22https%3A%2F%2Fsupertails.com%2Fpages%2Fdog-products%22%2C%22%24browser_version%22%3A%20121%2C%22%24screen_height%22%3A%20720%2C%22%24screen_width%22%3A%201280%2C%22mp_lib%22%3A%20%22web%22%2C%22%24lib_ve"
		"rsion%22%3A%20%222.49.0%22%2C%22%24insert_id%22%3A%20%22b8piuutgchrymlbc%22%2C%22time%22%3A%201707755791.578%2C%22distinct_id%22%3A%20%22%24device%3A18d9e2d1bbc24a5-0648fa325f9333-26001851-e1000-18d9e2d1bbc24a5%22%2C%22%24device_id%22%3A%20%2218d9e2d1bbc24a5-0648fa325f9333-26001851-e1000-18d9e2d1bbc24a5%22%2C%22%24initial_referrer%22%3A%20%22%24direct%22%2C%22%24initial_referring_domain%22%3A%20%22%24direct%22%2C%22Page%20URL%22%3A%20%22%2Fpages%2Fdog-products%22%2C%22Title%22%3A%20%22Buy%20Dog%20"
		"%26%20Puppy%20Products%20Online%20From%20Top%20Brands%20%7C%20Supertails%22%2C%22token%22%3A%20%22d5d290378d17a0b6634101925944f6a0%22%2C%22mp_sent_by_lib_version%22%3A%20%222.49.0%22%7D%7D%0A%5D", 
		"LAST");

	web_concurrent_start(0);

	web_url("Frame3_80-788199.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame3_80-788199.png?v=1696532946", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t354.inf", 
		"LAST");

	web_url("DTRBT0001PG_1_1.jpg", 
		"URL=https://supertails.com/cdn/shop/products/DTRBT0001PG_1_1.jpg?v=1696573499", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t355.inf", 
		"LAST");

	web_url("DTRBT0002PG_1.jpg", 
		"URL=https://supertails.com/cdn/shop/products/DTRBT0002PG_1.jpg?v=1696573502", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t356.inf", 
		"LAST");

	web_url("Frame1_2_360b4b64-fa3d-4223-9a43-96dc28e655cd-549694.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_2_360b4b64-fa3d-4223-9a43-96dc28e655cd-549694.png?v=1699610792", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t357.inf", 
		"LAST");

	web_url("Frame1_3_741ef670-7fb1-4957-b8d9-9a952844bd47-621406.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_3_741ef670-7fb1-4957-b8d9-9a952844bd47-621406.png?v=1699610792", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t358.inf", 
		"LAST");

	web_url("Frame1_4_2cf4fcff-1359-4978-b867-9b69d71e541d-227518.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_4_2cf4fcff-1359-4978-b867-9b69d71e541d-227518.png?v=1699610792", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t359.inf", 
		"LAST");

	web_url("Frame1_1_1795b847-fadf-48a4-aebc-f61838d3c5fb-176336.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_1_1795b847-fadf-48a4-aebc-f61838d3c5fb-176336.png?v=1699610792", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t360.inf", 
		"LAST");

	web_url("Frame1_5_c0779642-42df-4215-b429-1be4670bec16-793988.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_5_c0779642-42df-4215-b429-1be4670bec16-793988.png?v=1699610792", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t361.inf", 
		"LAST");

	web_url("Frame1_6_2cff992c-364c-4635-99e2-00a7dd857e4d-750865.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_6_2cff992c-364c-4635-99e2-00a7dd857e4d-750865.png?v=1699610792", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t362.inf", 
		"LAST");

	web_url("PedigreeCertificate_1_33e56ece-b863-4e61-9d72-302bfe21456d.png", 
		"URL=https://supertails.com/cdn/shop/files/PedigreeCertificate_1_33e56ece-b863-4e61-9d72-302bfe21456d.png?v=1699610792", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t363.inf", 
		"LAST");

	web_url("Frame1_7_18dbfbdb-aeb0-4d14-9aeb-4e0e13a6e09a-681299.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_7_18dbfbdb-aeb0-4d14-9aeb-4e0e13a6e09a-681299.png?v=1699610792", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t364.inf", 
		"LAST");

	web_concurrent_end(0);

	web_custom_request("produce_batch_8", 
		"URL=https://supertails.com/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t365.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1707755792920},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/pages/dog-products\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1707755792399}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://"
		"supertails.com/pages/dog-products\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1707755792403}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/pages/dog-products\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\""
		"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-9e2d7ccd-A199-49DC-D043-46A99472666A\"},\"metadata\":{\"event_created_at_ms\":1707755792406}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/pages/dog-products\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\","
		"\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-9e2d7ccd-A199-49DC-D043-46A99472666A\"},\"metadata\":{\"event_created_at_ms\":1707755792453}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.435\",\"page_url\":\"https://supertails.com/pages/dog-products\",\"shop_id\""
		":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":48,\"start_time\":5308,\"session_id\":\""
		"456fddc7-3907-4aa1-8f6b-174ceeb50cc2\"},\"metadata\":{\"event_created_at_ms\":1707755792454}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/pages/dog-products\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\""
		":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-9e2d7ccd-A199-49DC-D043-46A99472666A\"},\"metadata\":{\"event_created_at_ms\":1707755792523}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.435\",\"page_url\":\"https://supertails.com/pages/dog-products\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\""
		"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":117,\"start_time\":5308,\"session_id\":\"456fddc7-3907-4aa1-8f6b-174ceeb50cc2\"},\"metadata\":{\"event_created_at_ms\":1707755792523}}]}", 
		"LAST");

	web_custom_request("produce_batch_9", 
		"URL=https://supertails.com/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://supertails.com/pages/dog-products", 
		"Snapshot=t366.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1707755794365},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/pages/dog-products\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"456fddc7-3907-4aa1-8f6b-174ceeb50cc2\",\"run_time_duration\":1973,\"start_time\":3453,\""
		"page_duration\":3814},\"metadata\":{\"event_created_at_ms\":1707755794365}}]}", 
		"LAST");

	web_concurrent_start(0);

	web_url("shopify-boomerang-1.0.0.min.js_3", 
		"URL=https://supertails.com/cdn/shopifycloud/boomerang/shopify-boomerang-1.0.0.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t367.inf", 
		"LAST");

	web_url("Frame1-2022-06-14T175447.633_1-269517.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-14T175447.633_1-269517.png?v=1696485956", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t368.inf", 
		"LAST");

	web_url("Frame10803.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10803.png?v=1701695799", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t369.inf", 
		"LAST");

	web_url("Frame1-2022-06-14T175526.337-674266.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-06-14T175526.337-674266.png?v=1696485960", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t370.inf", 
		"LAST");

	web_concurrent_end(0);

	web_custom_request("tag.php_4", 
		"URL=https://wd-ret.io/rtg/v1/tr/tag.php", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t371.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":[{\"event\":\"viewPage\",\"uxid\":\"e8d4bb02-9c4a-4f32-aa75-ab90d53ece7d\",\"page\":\"https://supertails.com/collections/dog-biscuits-cookies\",\"device_type\":\"Windows\",\"uAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"referrer\":\"https://supertails.com/pages/dog-products\"}]}", 
		"LAST");

	web_url("Frame10335_4-926869.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame10335_4-926869.png?v=1696485964", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t372.inf", 
		"LAST");

	web_custom_request("track_3", 
		"URL=https://api-js.mixpanel.com/track/?verbose=1&ip=1&_=1707755794365", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://supertails.com/", 
		"Snapshot=t373.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=data="
		"%5B%0A%20%20%20%20%7B%22event%22%3A%20%22Page%20View%22%2C%22properties%22%3A%20%7B%22%24os%22%3A%20%22Windows%22%2C%22%24browser%22%3A%20%22Chrome%22%2C%22%24referrer%22%3A%20%22https%3A%2F%2Fsupertails.com%2F%22%2C%22%24referring_domain%22%3A%20%22supertails.com%22%2C%22%24current_url%22%3A%20%22https%3A%2F%2Fsupertails.com%2Fpages%2Fdog-products%22%2C%22%24browser_version%22%3A%20121%2C%22%24screen_height%22%3A%20720%2C%22%24screen_width%22%3A%201280%2C%22mp_lib%22%3A%20%22web%22%2C%22%24lib_ve"
		"rsion%22%3A%20%222.49.0%22%2C%22%24insert_id%22%3A%20%22b8piuutgchrymlbc%22%2C%22time%22%3A%201707755791.578%2C%22distinct_id%22%3A%20%22%24device%3A18d9e2d1bbc24a5-0648fa325f9333-26001851-e1000-18d9e2d1bbc24a5%22%2C%22%24device_id%22%3A%20%2218d9e2d1bbc24a5-0648fa325f9333-26001851-e1000-18d9e2d1bbc24a5%22%2C%22%24initial_referrer%22%3A%20%22%24direct%22%2C%22%24initial_referring_domain%22%3A%20%22%24direct%22%2C%22Page%20URL%22%3A%20%22%2Fpages%2Fdog-products%22%2C%22Title%22%3A%20%22Buy%20Dog%20"
		"%26%20Puppy%20Products%20Online%20From%20Top%20Brands%20%7C%20Supertails%22%2C%22token%22%3A%20%22d5d290378d17a0b6634101925944f6a0%22%2C%22mp_sent_by_lib_version%22%3A%20%222.49.0%22%7D%7D%0A%5D", 
		"LAST");

	web_concurrent_start(0);

	web_url("Frame10335_5-557670.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame10335_5-557670.png?v=1696485998", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t374.inf", 
		"LAST");

	web_url("Frame10335_7-498573.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame10335_7-498573.png?v=1696486004", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t375.inf", 
		"LAST");

	web_url("Frame106723110.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame106723110.png?v=1705057022", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t376.inf", 
		"LAST");

	web_url("Frame106722680.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame106722680.png?v=1702536241", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t377.inf", 
		"LAST");

	web_url("Frame106723111.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame106723111.png?v=1705057023", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t378.inf", 
		"LAST");

	web_url("Frame10335_6-813088.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame10335_6-813088.png?v=1696486001", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t379.inf", 
		"LAST");

	web_url("DTRBT0004PG_2.jpg", 
		"URL=https://supertails.com/cdn/shop/products/DTRBT0004PG_2.jpg?v=1696574665", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t380.inf", 
		"LAST");

	web_url("61pAQnI1XWL._SL1000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61pAQnI1XWL._SL1000.jpg?v=1699611376", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t381.inf", 
		"LAST");

	web_url("Group352_1.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Group352_1.jpg?v=1696574605", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t382.inf", 
		"LAST");

	web_url("61nil2LuVSL._SL1000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61nil2LuVSL._SL1000.jpg?v=1699611376", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t383.inf", 
		"LAST");

	web_url("61nsqnf6h6L._SL1000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61nsqnf6h6L._SL1000.jpg?v=1699611376", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t384.inf", 
		"LAST");

	web_url("61mJ_KXrsdL._SL1000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61mJ_KXrsdL._SL1000.jpg?v=1699611376", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t385.inf", 
		"LAST");

	web_url("61s8-WfYh0L._SL1000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61s8-WfYh0L._SL1000.jpg?v=1699611376", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t386.inf", 
		"LAST");

	web_url("61f50Q7YOAL._SL1000.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61f50Q7YOAL._SL1000.jpg?v=1699611376", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t387.inf", 
		"LAST");

	web_url("PedigreeCertificate_1_35cce938-ff54-4610-bb31-63a674a7ae18.png", 
		"URL=https://supertails.com/cdn/shop/files/PedigreeCertificate_1_35cce938-ff54-4610-bb31-63a674a7ae18.png?v=1699611376", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t388.inf", 
		"LAST");

	web_url("Frame10841_1.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10841_1.png?v=1701776533", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t389.inf", 
		"LAST");

	web_url("cart.js_5", 
		"URL=https://supertails.com/cart.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t390.inf", 
		"LAST");

	web_url("CC1215_Front-198177.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1215_Front-198177.jpg?v=1696473831", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t391.inf", 
		"LAST");

	web_concurrent_end(0);

	web_url("cart_3", 
		"URL=https://supertails.com/cart?t=1707755795460&view=ajax", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t392.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=ba58dba7-3fb0-4324-9b1c-8303f859ab1e; DOMAIN=supertails.com");

	web_concurrent_start(0);

	web_url("CC1215_Back-417337.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1215_Back-417337.jpg?v=1696473861", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t393.inf", 
		"LAST");

	web_url("Frame10204_16_7ea1b014-5492-43a3-becb-adb5417a185f-455524.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_16_7ea1b014-5492-43a3-becb-adb5417a185f-455524.jpg?v=1696473868", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t394.inf", 
		"LAST");

	web_url("Frame10204_17_22bc12a1-c9d6-4ab4-9db0-fc85078baa03-606979.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_17_22bc12a1-c9d6-4ab4-9db0-fc85078baa03-606979.jpg?v=1696473866", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t395.inf", 
		"LAST");

	web_url("Frame10204_14_4f359cd0-b34d-492c-90de-8e46349d0486-787866.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_14_4f359cd0-b34d-492c-90de-8e46349d0486-787866.jpg?v=1696473873", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t396.inf", 
		"LAST");

	web_url("Frame10204_15_ca46f51d-032f-43e2-a377-4e08dea32297-825602.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_15_ca46f51d-032f-43e2-a377-4e08dea32297-825602.jpg?v=1696473871", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t397.inf", 
		"LAST");

	web_url("Frame10985.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10985.png?v=1701863919", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t398.inf", 
		"LAST");

	web_url("Frame1-2021-11-12T105145.178-523170.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2021-11-12T105145.178-523170.png?v=1696543934", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t399.inf", 
		"LAST");

	web_url("Frame1-2022-05-11T172629.753-422824.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-05-11T172629.753-422824.png?v=1696543945", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t400.inf", 
		"LAST");

	web_url("Frame10731.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10731.png?v=1701682328", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t401.inf", 
		"LAST");

	web_url("Frame1-2022-05-11T172625.302-634705.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-05-11T172625.302-634705.png?v=1696543955", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t402.inf", 
		"LAST");

	web_url("CC1217_Back-983231.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1217_Back-983231.jpg?v=1696477657", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t403.inf", 
		"LAST");

	web_url("Frame10730.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10730.png?v=1701682328", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t404.inf", 
		"LAST");

	web_url("Frame10204_24_045ee8b1-f629-4895-9834-85f3d706302e-728725.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_24_045ee8b1-f629-4895-9834-85f3d706302e-728725.jpg?v=1696477660", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t405.inf", 
		"LAST");

	web_url("CC1217_Front-728745.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1217_Front-728745.jpg?v=1696477655", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t406.inf", 
		"LAST");

	web_url("Frame10204_23_33e0a8be-8775-434e-9f67-19af6ba039fd-433744.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_23_33e0a8be-8775-434e-9f67-19af6ba039fd-433744.jpg?v=1696477662", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t407.inf", 
		"LAST");

	web_url("cart.js_6", 
		"URL=https://supertails.com/cart.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t408.inf", 
		"LAST");

	web_url("Frame11008.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame11008.png?v=1702296002", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t409.inf", 
		"LAST");

	web_url("Frame10204_22_3841ced1-4739-47f0-905b-2b8b89a3edaa-134109.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_22_3841ced1-4739-47f0-905b-2b8b89a3edaa-134109.jpg?v=1696477667", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t410.inf", 
		"LAST");

	web_url("Frame106723106.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame106723106.png?v=1705051631", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t411.inf", 
		"LAST");

	web_url("Frame10204_25_bb2eea89-423e-47dc-a3a2-678cd777584d-875068.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_25_bb2eea89-423e-47dc-a3a2-678cd777584d-875068.jpg?v=1696477665", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t412.inf", 
		"LAST");

	web_url("Frame106723107.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame106723107.png?v=1705051631", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t413.inf", 
		"LAST");

	web_url("CC1218_Front-574045.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1218_Front-574045.jpg?v=1696484882", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t414.inf", 
		"LAST");

	web_url("CC1218_Back-504465.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1218_Back-504465.jpg?v=1696484884", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t415.inf", 
		"LAST");

	web_url("Frame10204_27-362970.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_27-362970.jpg?v=1696484893", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t416.inf", 
		"LAST");

	web_url("Frame10204_29_f5e37d73-4dfb-4f59-b7f6-2d128fff3471-871087.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_29_f5e37d73-4dfb-4f59-b7f6-2d128fff3471-871087.jpg?v=1696484887", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t417.inf", 
		"LAST");

	web_url("Frame10204_26_51472138-4284-4692-b00a-af40c577b0f8-854121.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_26_51472138-4284-4692-b00a-af40c577b0f8-854121.jpg?v=1696484899", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t418.inf", 
		"LAST");

	web_url("Frame10204_28_75c38171-5243-4c59-a7c2-1b7c455b0da4-665355.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_28_75c38171-5243-4c59-a7c2-1b7c455b0da4-665355.jpg?v=1696484890", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t419.inf", 
		"LAST");

	web_url("Frame10915_7f520009-fa74-4949-848c-7c13ec6fbea1.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10915_7f520009-fa74-4949-848c-7c13ec6fbea1.png?v=1701847021", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t420.inf", 
		"LAST");

	web_url("CC1219_Front-732335.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1219_Front-732335.jpg?v=1696485327", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t421.inf", 
		"LAST");

	web_url("CC1219_Back-946348.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1219_Back-946348.jpg?v=1696485329", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t422.inf", 
		"LAST");

	web_url("Frame10335_3-793910.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame10335_3-793910.png?v=1696485333", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t423.inf", 
		"LAST");

	web_url("Frame10335_1-777775.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame10335_1-777775.png?v=1696485341", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t424.inf", 
		"LAST");

	web_url("Frame10335_2-844964.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame10335_2-844964.png?v=1696485338", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t425.inf", 
		"LAST");

	web_url("Frame11019.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame11019.png?v=1702297028", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t426.inf", 
		"LAST");

	web_url("Frame10335-735461.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame10335-735461.png?v=1696485345", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t427.inf", 
		"LAST");

	web_url("Frame106723108.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame106723108.png?v=1705056259", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t428.inf", 
		"LAST");

	web_url("Frame106723109.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame106723109.png?v=1705056258", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t429.inf", 
		"LAST");

	web_url("CC1202_back-766290.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1202_back-766290.jpg?v=1696484048", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t430.inf", 
		"LAST");

	web_url("Frame10204_7_4f6a9397-7c20-4e5c-9498-e4fddde96afa-954991.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_7_4f6a9397-7c20-4e5c-9498-e4fddde96afa-954991.jpg?v=1696484055", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t431.inf", 
		"LAST");

	web_url("Frame10204_6_05e4eb13-1360-431d-9b0d-56b12ed33b76-152840.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_6_05e4eb13-1360-431d-9b0d-56b12ed33b76-152840.jpg?v=1696484053", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t432.inf", 
		"LAST");

	web_url("Frame10204_5_374ffc9e-ad33-429d-9cab-9c1053883705-850873.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_5_374ffc9e-ad33-429d-9cab-9c1053883705-850873.jpg?v=1696484050", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t433.inf", 
		"LAST");

	web_url("CC1202_front-120518.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1202_front-120518.jpg?v=1696484045", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t434.inf", 
		"LAST");

	web_url("Frame10204_8_f396868e-3a4e-4640-b4f6-93b818818f32-524438.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_8_f396868e-3a4e-4640-b4f6-93b818818f32-524438.jpg?v=1696484057", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t435.inf", 
		"LAST");

	web_url("CC1210_back-309485.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1210_back-309485.jpg?v=1696484670", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t436.inf", 
		"LAST");

	web_url("Frame10984.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10984.png?v=1701863724", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t437.inf", 
		"LAST");

	web_url("Frame10204_47-722536.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_47-722536.jpg?v=1696484672", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t438.inf", 
		"LAST");

	web_url("CC1210_front-156521.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1210_front-156521.jpg?v=1696484665", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t439.inf", 
		"LAST");

	web_url("Frame10204_46-957138.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_46-957138.jpg?v=1696484675", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t440.inf", 
		"LAST");

	web_url("Frame10204_44-302736.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_44-302736.jpg?v=1696484679", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t441.inf", 
		"LAST");

	web_url("Frame11004.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame11004.png?v=1702292889", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t442.inf", 
		"LAST");

	web_url("Frame10204_45-304204.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_45-304204.jpg?v=1696484677", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t443.inf", 
		"LAST");

	web_url("Frame10204_43-720357.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_43-720357.jpg?v=1696484682", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t444.inf", 
		"LAST");

	web_url("sosoftandchewy3-1-811685.png", 
		"URL=https://supertails.com/cdn/shop/products/sosoftandchewy3-1-811685.png?v=1696470492", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t445.inf", 
		"LAST");

	web_url("redheartsimage-418996.png", 
		"URL=https://supertails.com/cdn/shop/products/redheartsimage-418996.png?v=1696470487", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t446.inf", 
		"LAST");

	web_url("moistheartyandtasty-635422.png", 
		"URL=https://supertails.com/cdn/shop/products/moistheartyandtasty-635422.png?v=1696470499", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t447.inf", 
		"LAST");

	web_url("toohardtoresisit3-1-143704.png", 
		"URL=https://supertails.com/cdn/shop/products/toohardtoresisit3-1-143704.png?v=1696470495", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t448.inf", 
		"LAST");

	web_url("Frame44_518c3c76-ad2a-469b-a39d-e0615f9d90a6.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame44_518c3c76-ad2a-469b-a39d-e0615f9d90a6.png?v=1700813198", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t449.inf", 
		"LAST");

	web_url("VKF_2-600326.png", 
		"URL=https://supertails.com/cdn/shop/products/VKF_2-600326.png?v=1696470506", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t450.inf", 
		"LAST");

	web_url("Frame45_3e17a624-9833-499d-b1ce-805651148b76.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame45_3e17a624-9833-499d-b1ce-805651148b76.png?v=1700813199", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t451.inf", 
		"LAST");

	web_url("CC1208_Front-844213.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1208_Front-844213.jpg?v=1696476482", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t452.inf", 
		"LAST");

	web_url("Frame10204_38-843560.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_38-843560.jpg?v=1696476487", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t453.inf", 
		"LAST");

	web_url("Frame10204_37-257589.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_37-257589.jpg?v=1696476490", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t454.inf", 
		"LAST");

	web_url("CC1208_Back-214563.jpg", 
		"URL=https://supertails.com/cdn/shop/products/CC1208_Back-214563.jpg?v=1696476485", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t455.inf", 
		"LAST");

	web_url("highlynutritious1-685709.png", 
		"URL=https://supertails.com/cdn/shop/products/highlynutritious1-685709.png?v=1696470503", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t456.inf", 
		"LAST");

	web_url("Frame10204_36-309701.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_36-309701.jpg?v=1696476492", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t457.inf", 
		"LAST");

	web_url("Frame10997.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10997.png?v=1702291654", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t458.inf", 
		"LAST");

	web_url("Frame10204_35-881668.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame10204_35-881668.jpg?v=1696476498", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t459.inf", 
		"LAST");

	web_url("DTRBT0004PG_2_f1b0078d-5d60-41a2-934a-71fbe901951a.jpg", 
		"URL=https://supertails.com/cdn/shop/products/DTRBT0004PG_2_f1b0078d-5d60-41a2-934a-71fbe901951a.jpg?v=1701776123", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t460.inf", 
		"LAST");

	web_url("Frame838.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame838.png?v=1701776123", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t461.inf", 
		"LAST");

	web_url("61pAQnI1XWL._SL1000_241b6b9e-37a6-4c6d-b5fb-777b5a66b53b.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61pAQnI1XWL._SL1000_241b6b9e-37a6-4c6d-b5fb-777b5a66b53b.jpg?v=1701776123", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t462.inf", 
		"LAST");

	web_concurrent_end(0);

	web_url("features_3", 
		"URL=https://app.getmodemagic.com/api/features?shop=supertail&path=%2Fcollections%2Fdog-biscuits-cookies&domain=supertails.com&app=modemagic&thankyou=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://supertails.com/", 
		"Snapshot=t463.inf", 
		"Mode=HTML", 
		"LAST");

	web_concurrent_start(0);

	web_url("61nil2LuVSL._SL1000_7115824f-983d-4e7f-8ef2-daa50be641c5.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61nil2LuVSL._SL1000_7115824f-983d-4e7f-8ef2-daa50be641c5.jpg?v=1701776123", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t464.inf", 
		"LAST");

	web_url("61mJ_KXrsdL._SL1000_72d3e9a3-52f4-4b83-a175-47d01caf8427.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61mJ_KXrsdL._SL1000_72d3e9a3-52f4-4b83-a175-47d01caf8427.jpg?v=1701776123", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t465.inf", 
		"LAST");

	web_url("61nsqnf6h6L._SL1000_16c632f6-de40-42e1-8f68-6c0345e1d5b8.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61nsqnf6h6L._SL1000_16c632f6-de40-42e1-8f68-6c0345e1d5b8.jpg?v=1701776123", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t466.inf", 
		"LAST");

	web_url("61f50Q7YOAL._SL1000_0bf160db-d221-4a86-8bd4-0eaa83f530e0.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61f50Q7YOAL._SL1000_0bf160db-d221-4a86-8bd4-0eaa83f530e0.jpg?v=1701776123", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t467.inf", 
		"LAST");

	web_url("61s8-WfYh0L._SL1000_6ffd7a2a-66c1-4db2-8c87-ab8c87d0e718.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61s8-WfYh0L._SL1000_6ffd7a2a-66c1-4db2-8c87-ab8c87d0e718.jpg?v=1701776123", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t468.inf", 
		"LAST");

	web_url("PedigreeCertificate_1_8dd8ed1b-6725-4b6f-af03-75cf2fde0222.png", 
		"URL=https://supertails.com/cdn/shop/files/PedigreeCertificate_1_8dd8ed1b-6725-4b6f-af03-75cf2fde0222.png?v=1701776123", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t469.inf", 
		"LAST");

	web_url("Frame10840.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10840.png?v=1701776187", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t470.inf", 
		"LAST");

	web_url("Frame1_1_768cc583-0fe4-4f5c-904f-e8b80b025092-211377.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_1_768cc583-0fe4-4f5c-904f-e8b80b025092-211377.png?v=1699610970", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t471.inf", 
		"LAST");

	web_url("Frame1_2_a1548340-7508-43aa-affb-c034179cf65a-316613.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_2_a1548340-7508-43aa-affb-c034179cf65a-316613.png?v=1696430506", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t472.inf", 
		"LAST");

	web_url("Frame1_5_f3e016aa-13ad-44f0-9735-d9c74481adf6-759192.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_5_f3e016aa-13ad-44f0-9735-d9c74481adf6-759192.png?v=1699610970", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t473.inf", 
		"LAST");

	web_url("pedigree_aad8607c-cd02-4861-b888-93476977566e-503241.png", 
		"URL=https://supertails.com/cdn/shop/products/pedigree_aad8607c-cd02-4861-b888-93476977566e-503241.png?v=1696430499", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t474.inf", 
		"LAST");

	web_url("Frame1_3_9e4cdccd-299d-456b-b1e6-455b5cc03e28-360484.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_3_9e4cdccd-299d-456b-b1e6-455b5cc03e28-360484.png?v=1699610970", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t475.inf", 
		"LAST");

	web_url("Frame1_4_7c917e92-ffb2-42fb-8aec-1d8e72ea4444-213258.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_4_7c917e92-ffb2-42fb-8aec-1d8e72ea4444-213258.png?v=1699610970", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t476.inf", 
		"LAST");

	web_url("Frame1_7_5914b456-9eab-40ec-a4c9-2343de8250bc-822202.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_7_5914b456-9eab-40ec-a4c9-2343de8250bc-822202.png?v=1699610970", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t477.inf", 
		"LAST");

	web_url("Frame10811.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10811.png?v=1701771868", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t478.inf", 
		"LAST");

	web_url("s3-957249.png", 
		"URL=https://supertails.com/cdn/shop/products/s3-957249.png?v=1696470292", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t479.inf", 
		"LAST");

	web_url("PedigreeCertificate_1_06a3a998-9df9-4dd6-b4a6-7e4528180d39.png", 
		"URL=https://supertails.com/cdn/shop/files/PedigreeCertificate_1_06a3a998-9df9-4dd6-b4a6-7e4528180d39.png?v=1699610970", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t480.inf", 
		"LAST");

	web_url("s5-995776.png", 
		"URL=https://supertails.com/cdn/shop/products/s5-995776.png?v=1696470296", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t481.inf", 
		"LAST");

	web_url("Frame1_6_7d716e3b-66b0-496b-ab02-4cd5cd9ae5ab-737925.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_6_7d716e3b-66b0-496b-ab02-4cd5cd9ae5ab-737925.png?v=1699610970", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t482.inf", 
		"LAST");

	web_url("s1-497475.png", 
		"URL=https://supertails.com/cdn/shop/products/s1-497475.png?v=1696470305", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t483.inf", 
		"LAST");

	web_url("Frame37_acb58354-09af-408f-b50b-04cf11ec18ab.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame37_acb58354-09af-408f-b50b-04cf11ec18ab.png?v=1700812221", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t484.inf", 
		"LAST");

	web_url("s-237304.png", 
		"URL=https://supertails.com/cdn/shop/products/s-237304.png?v=1696470310", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t485.inf", 
		"LAST");

	web_url("shopping1-860767.png", 
		"URL=https://supertails.com/cdn/shop/products/shopping1-860767.png?v=1696473198", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t486.inf", 
		"LAST");

	web_url("Frame36_2425420a-4bdc-4527-af37-f96a91d0a276.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame36_2425420a-4bdc-4527-af37-f96a91d0a276.png?v=1700812221", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t487.inf", 
		"LAST");

	web_url("s2-565970.png", 
		"URL=https://supertails.com/cdn/shop/products/s2-565970.png?v=1696470300", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t488.inf", 
		"LAST");

	web_url("57_800x8001_b9eabf43-0375-47af-87f1-5eac05494538-145202.png", 
		"URL=https://supertails.com/cdn/shop/products/57_800x8001_b9eabf43-0375-47af-87f1-5eac05494538-145202.png?v=1696473201", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t489.inf", 
		"LAST");

	web_url("61_800x800_a300593d-c5ea-40a8-bcc4-38eb068bb776.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61_800x800_a300593d-c5ea-40a8-bcc4-38eb068bb776.jpg?v=1682058348", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t490.inf", 
		"LAST");

	web_url("58_800x800_735f62c6-1624-464b-9d9d-82622959dc9f.jpg", 
		"URL=https://supertails.com/cdn/shop/products/58_800x800_735f62c6-1624-464b-9d9d-82622959dc9f.jpg?v=1682058348", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t491.inf", 
		"LAST");

	web_url("60_800x800_aafc7406-cc48-48ee-a690-143781040cfb.jpg", 
		"URL=https://supertails.com/cdn/shop/products/60_800x800_aafc7406-cc48-48ee-a690-143781040cfb.jpg?v=1682058348", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t492.inf", 
		"LAST");

	web_url("59_800x800_78e9c622-5f79-4432-b4c1-2c7f07705e6b.jpg", 
		"URL=https://supertails.com/cdn/shop/products/59_800x800_78e9c622-5f79-4432-b4c1-2c7f07705e6b.jpg?v=1682058348", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t493.inf", 
		"LAST");

	web_url("58_800x800_af55f135-fd1d-49ea-95e9-2df04de50f7f.jpg", 
		"URL=https://supertails.com/cdn/shop/products/58_800x800_af55f135-fd1d-49ea-95e9-2df04de50f7f.jpg?v=1682058348", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t494.inf", 
		"LAST");

	web_url("59_800x800_0df5c605-fdb8-42fc-baae-4fa638cff052.jpg", 
		"URL=https://supertails.com/cdn/shop/products/59_800x800_0df5c605-fdb8-42fc-baae-4fa638cff052.jpg?v=1682058348", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t495.inf", 
		"LAST");

	web_url("Frame10547_2_56b761c7-d9bd-44f7-ab8d-f69bd5a4dcb2-284530.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame10547_2_56b761c7-d9bd-44f7-ab8d-f69bd5a4dcb2-284530.png?v=1696473205", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t496.inf", 
		"LAST");

	web_url("60_800x800_2c772f15-0dd6-4928-9d75-93e8b5902470.jpg", 
		"URL=https://supertails.com/cdn/shop/products/60_800x800_2c772f15-0dd6-4928-9d75-93e8b5902470.jpg?v=1682058348", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t497.inf", 
		"LAST");

	web_url("61_800x800_4aa6f6cb-6b84-4e5e-8be1-0bf32e074347.jpg", 
		"URL=https://supertails.com/cdn/shop/products/61_800x800_4aa6f6cb-6b84-4e5e-8be1-0bf32e074347.jpg?v=1682058348", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t498.inf", 
		"LAST");

	web_url("Frame10964_831a0142-f639-450a-8be0-6a3170db28e1.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10964_831a0142-f639-450a-8be0-6a3170db28e1.png?v=1701859862", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t499.inf", 
		"LAST");

	web_url("Frame10963.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10963.png?v=1701859862", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t500.inf", 
		"LAST");

	web_url("CertificateOfAuthenticity_Basil-11_47f34b16-f638-4c15-8401-45d9ffc02bd7.png", 
		"URL=https://supertails.com/cdn/shop/files/CertificateOfAuthenticity_Basil-11_47f34b16-f638-4c15-8401-45d9ffc02bd7.png?v=1702384111", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t501.inf", 
		"LAST");

	web_url("Frame1-2021-11-11T161424.561_1.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2021-11-11T161424.561_1.png?v=1696544020", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t502.inf", 
		"LAST");

	web_url("Frame1-2022-05-11T114856.659-385999.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-05-11T114856.659-385999.png?v=1696544024", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t503.inf", 
		"LAST");

	web_url("Frame10734.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10734.png?v=1701682597", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t504.inf", 
		"LAST");

	web_url("Frame10735.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10735.png?v=1701682597", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t505.inf", 
		"LAST");

	web_url("Frame_1_-_2021-11-12T102402.543_1.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame_1_-_2021-11-12T102402.543_1.png?v=1696544211", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t506.inf", 
		"LAST");

	web_url("Frame1-2022-05-11T174636.274-214501.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame1-2022-05-11T174636.274-214501.png?v=1696544215", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t507.inf", 
		"LAST");

	web_url("Frame10746.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10746.png?v=1701684564", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t508.inf", 
		"LAST");

	web_url("Frame10747.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10747.png?v=1701684565", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t509.inf", 
		"LAST");

	web_url("Frame1_f66dd9e4-9681-40a2-892f-ed56be1abeb9_1_1.jpg", 
		"URL=https://supertails.com/cdn/shop/products/Frame1_f66dd9e4-9681-40a2-892f-ed56be1abeb9_1_1.jpg?v=1696544105", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t510.inf", 
		"LAST");

	web_url("Frame10739.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10739.png?v=1701683601", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t511.inf", 
		"LAST");

	web_url("Frame3_91-315528.png", 
		"URL=https://supertails.com/cdn/shop/products/Frame3_91-315528.png?v=1696544112", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t512.inf", 
		"LAST");

	web_url("Frame10740_1.png", 
		"URL=https://supertails.com/cdn/shop/files/Frame10740_1.png?v=1701683683", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t513.inf", 
		"LAST");

	web_concurrent_end(0);

	web_add_cookie("wpm-domain-test=1; DOMAIN=supertails.com");

	web_url("dog-biscuits-cookies_2", 
		"URL=https://supertails.com/wpm@2dad7dd6w8794fdd7p7676799am6905778b/web-pixel-shopify-custom-pixel@0575/sandbox/modern/collections/dog-biscuits-cookies", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t514.inf", 
		"Mode=HTML", 
		"LAST");

	web_concurrent_start(0);

	web_url("supertail.myshopify.com.min.js", 
		"URL=https://assets.findify.io/supertail.myshopify.com.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t515.inf", 
		"LAST");

	web_url("supertail.myshopify.com.min.css", 
		"URL=https://assets.findify.io/supertail.myshopify.com.min.css", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://supertails.com/", 
		"Snapshot=t516.inf", 
		"LAST");

	web_concurrent_end(0);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("audience.php_4", 
		"URL=https://wd-ret.io/rtg/v1/track/audience/audience.php", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t517.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"fingerprintID\":-45902929,\"data\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"screenSize\":\"1280x720x24\",\"language\":\"en-GB\"}}", 
		"LAST");

	web_url("supertail.myshopify.com-config.min.js", 
		"URL=https://assets.findify.io/supertail.myshopify.com-config.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t518.inf", 
		"LAST");

	web_custom_request("produce_batch_10", 
		"URL=https://supertails.com/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t519.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1707755800691},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/collections/dog-biscuits-cookies\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1707755800181}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https:/"
		"/supertails.com/collections/dog-biscuits-cookies\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1707755800183}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/collections/dog-biscuits-cookies\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"event_name\":\""
		"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-9e2d9d51-DBBD-45BB-C8D9-ADA72A49BDCB\"},\"metadata\":{\"event_created_at_ms\":1707755800185}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/collections/dog-biscuits-cookies\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"event_name\":\""
		"collection_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-9e2d9d55-539E-485C-F1DA-548BB3EE9CE8\"},\"metadata\":{\"event_created_at_ms\":1707755800186}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/collections/dog-biscuits-cookies\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\""
		"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-9e2d9d51-DBBD-45BB-C8D9-ADA72A49BDCB\"},\"metadata\":{\"event_created_at_ms\":1707755800241}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.435\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/collections/dog-biscuits-cookies\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"collection_viewed\",\"event_type\":\"standard\",\"event_id\":\""
		"sh-9e2d9d55-539E-485C-F1DA-548BB3EE9CE8\"},\"metadata\":{\"event_created_at_ms\":1707755800242}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.435\",\"page_url\":\"https://supertails.com/collections/dog-biscuits-cookies\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\""
		"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":56,\"start_time\":5852,\"session_id\":\"89200e55-d7ac-4317-97b2-9839599d51ce\"},\"metadata\":{\"event_created_at_ms\":1707755800243}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https:"
		"//supertails.com/collections/dog-biscuits-cookies\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-9e2d9d51-DBBD-45BB-C8D9-ADA72A49BDCB\"},\"metadata\":{\"event_created_at_ms\":1707755800633}},{\""
		"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.435\",\"bundle_target\":\"modern\",\"page_url\":\"https://supertails.com/collections/dog-biscuits-cookies\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"collection_viewed"
		"\",\"event_type\":\"standard\",\"event_id\":\"sh-9e2d9d55-539E-485C-F1DA-548BB3EE9CE8\"},\"metadata\":{\"event_created_at_ms\":1707755800634}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.435\",\"page_url\":\"https://supertails.com/collections/dog-biscuits-cookies\",\"shop_id\":56580210861,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\""
		"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":447,\"start_time\":5852,\"session_id\":\"89200e55-d7ac-4317-97b2-9839599d51ce\"},\"metadata\":{\"event_created_at_ms\":1707755800634}}]}", 
		"LAST");

	web_url("supertail.myshopify.com.js_2", 
		"URL=https://cdn-app.sealsubscriptions.com/shopify/public/status/shop/supertail.myshopify.com.js?1707755796", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t520.inf", 
		"LAST");

	web_url("cookiematch.aspx_3", 
		"URL=https://ck.2trk.info/rtb/google/cookiematch.aspx?id=preciso_srl&cok15=pou_ssc_in&cnty15=IND&ProgramName=SUPERTAILS_IN&AudienceId=3317&CampaignId=64117&Referrer=https%3A%2F%2Fsupertails.com%2Fcollections%2Fdog-biscuits-cookies&PageType=category&Browsercheck=true&a15=false&dw15=false&google_error=3", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t521.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("cookiematch.aspx_4", 
		"URL=https://ck.2trk.info/rtb/google/cookiematch.aspx?id=preciso_srl&cok15=pos_ssc_in&cnty15=IND&ProgramName=supertailscom_IN&AudienceId=4332&CampaignId=63891&Referrer=https%3A%2F%2Fsupertails.com%2Fcollections%2Fdog-biscuits-cookies&pdt_id=6996534558893|6716704587949|7452246081774|6716705898669|7452182020334|7447112712430|7452236841198|7452238414062|7452242936046|6753507934381|6725493129389|7930655867118|6712386846893|8016086565102|8016075194606|7930643120366|6932935704749|7444849164526|"
		"7447065264366|6877161029805|6996498088109|7444942586094|6901783691437|6884120756397|6932947665069|6901782118573|7447124181230|8028980510958|6700556910765|6700557074605|7930649444590|7930632798446|7044984537261|7918123253998|6712387698861|7452206203118|7918128627950|7994338640110|7918131413230|6769594106029|7742676238574|7553228898542|693627636958&pdt_category_list=dog-biscuits-cookies&pagetype=category&Browsercheck=true&a15=false&dw15=false&google_error=3", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://supertails.com/", 
		"Snapshot=t522.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("update.js", 
		"URL=https://supertails.com/cart/update.js", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=https://supertails.com/collections/dog-biscuits-cookies", 
		"Snapshot=t523.inf", 
		"Mode=HTML", 
		"Body=attributes[_findify_id]={\"uniq_id\":\"t7Ko6XBcc9JgF8nU\",\"visit_id\":\"zm8zVDXfaYfBrQ7H\"}", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "1");

	web_url("audit.aspx", 
		"URL=https://ck.2trk.info/audit.aspx?token=SUPERTAILS_IN&pagetype=home&ref=https%253A%2F%2Fsupertails.com%2F", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://supertails.com/", 
		"Snapshot=t524.inf", 
		"LAST");

	return 0;
}
# 5 "d:\\lr scripts\\depot\\itdepot\\\\combined_itdepot.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "d:\\lr scripts\\depot\\itdepot\\\\combined_itdepot.c" 2

