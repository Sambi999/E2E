# 1 "d:\\lr scripts\\reqres\\\\combined_ReqRes.c"
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







 
 



















# 1 "d:\\lr scripts\\reqres\\\\combined_ReqRes.c" 2

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

 
 
 

                               


 
 
 





















# 2 "d:\\lr scripts\\reqres\\\\combined_ReqRes.c" 2

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


 
 


# 3 "d:\\lr scripts\\reqres\\\\combined_ReqRes.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "d:\\lr scripts\\reqres\\\\combined_ReqRes.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(96);

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("reqres.in", 
		"URL=https://reqres.in/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:G-2eSays08rQ4WLBrt1FnH6jSVjqTxCrmsR_dxz94iE&cup2hreq=5ebb95844475762b82fff2496a6201490f09cb331c2e776d22c71c3b1c6633db", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{5341785f-3e33-478e-b1a3-097beda96f35}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{e8bb138d-0900-429a-b8c5-51b9077df1f7}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{f98d5c32-8230-4fc0-a3ae-875fb36c1781}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\""
		"ping_freshness\":\"{8efcac45-d8d2-4655-ac16-bb516883ce4c}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol:20or@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.8069f8805123f74944304604381770bb694317c9e1044e096f540222dc56c0f6\"}]},\"ping\":{\"ping_freshness\":\""
		"{b34396ef-3092-4d12-8977-143239863cd2}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"20230923.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:27p3@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cadbf9a5f27721576d77d35576f37ca01ac34d86bce73958bf71cde62af71b48\"}]},\"ping\":{\"ping_freshness\":\"{99e4a3d4-96d9-4363-babb-82e0a95b73bf}\",\"rd\":6245},\"updatecheck\":"
		"{},\"version\":\"432\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6153,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{0fa1664a-a295-410b-82e9-0c1147e1ba2f}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\","
		"\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{e59ef37a-8d44-455a-ae8c-6e6a8db0671c}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\""
		"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{95df3547-cb85-40a8-9a19-c4aa6b8c3494}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":"
		"{\"ping_freshness\":\"{38700613-1aea-48a6-a19f-a46eec4bd159}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness\":\"{fab40322-b1da-421c-889c-c2b9e354ab3a}\",\"rd\":6245},\"updatecheck\":{"
		"},\"version\":\"8531\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{895511cf-ca04-42f6-8ddc-ba2825f54aa1}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\""
		"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{03c084a5-cacc-42c8-8da8-47f8088d2392}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.e4bdca96fb46d22bc12f5bc5bdb5cdb518555fd1762653f8afc96d06b34ec74b\"}]},\"ping\":{\"ping_freshness\":\"{64421a94-0452-48f8-a38f-834ce05acf90}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"852\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.887c873b6c3a26844482754c8534268fcd848b8c543b652626b4d4ec367f26fd\"}]},\"ping\":{\""
		"ping_freshness\":\"{70cac0bb-fd71-4e72-aec9-d1394c31cad0}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"3017\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{2ffaa6b9-117d-44c1-a8b1-f5ce563d5bbd}\",\"rd\":6245},"
		"\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{adb6e29c-1e3a-48c6-b6c8-0683a6e34900}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\""
		"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{13814018-6bee-4c6d-963b-9a987797d596}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\""
		"Stable\",\"enabled\":true,\"installdate\":6153,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.74316953175dd4fc990c661551ce1387c462d705f9eff88d759fb130885a3530\"}]},\"ping\":{\"ping_freshness\":\"{e1ec4b71-a67d-41fe-8af7-bca71c005b95}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2024.2.4.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\""
		":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{772b5f21-c171-444a-bde4-77bcbda1415a}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.48fecfa3c6f59eb6c34fdd5e8f19e0678699e2f27dc8ebfa7025c246d4575c68\"}]},"
		"\"ping\":{\"ping_freshness\":\"{8a084267-bf68-4b89-befa-151070cfba08}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2024.1.17.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6153,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217\"}]},\"ping\":{\"ping_freshness\":\"{5b092dae-881d-4589-ad73-da9b54d229fd}\",\""
		"rd\":6245},\"updatecheck\":{},\"version\":\"2024.2.5.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.140\",\"protocol\":\"3.1\",\"requestid\":\"{0447b16c-5d4f-4f73-b8d9-4eb778c09f61}\",\"sessionid\":\""
		"{7a48791b-2f8c-4ca4-8c23-ab017f4748ad}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"121.0.6167.140\"}}", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=I76XEoEoSqxhEjiZ7akd2w%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x17sambismart005@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xCF\\xCF\\x80\\x83\\x92\\xCD\\xD4\\xB4\\x01@\\x00H\\x07:%z00000157-2da7-5740-0000-000057da890cR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.140 (a5856993c61543d4acbee5f848f1750607e87ba0-refs/branch-heads/6167@{#1684}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		"LAST");

	web_concurrent_start(0);

	web_url("monetization.custom.js", 
		"URL=https://m.servedby-buysellads.com/monetization.custom.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t6.inf", 
		"LAST");

	web_url("font-awesome.min.css", 
		"URL=https://maxcdn.bootstrapcdn.com/font-awesome/4.2.0/css/font-awesome.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://reqres.in/", 
		"Snapshot=t7.inf", 
		"LAST");

	web_url("logo.png", 
		"URL=https://reqres.in/img/logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://reqres.in/", 
		"Snapshot=t8.inf", 
		"LAST");

	web_url("app.css", 
		"URL=https://reqres.in/css/app.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://reqres.in/", 
		"Snapshot=t9.inf", 
		"LAST");

	web_url("DigiCertSHA2ExtendedValidationServerCA.crt", 
		"URL=http://cacerts.digicert.com/DigiCertSHA2ExtendedValidationServerCA.crt", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"LAST");

	web_url("swagger-logo-horizontal.jpeg", 
		"URL=https://reqres.in/img/swagger-logo-horizontal.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://reqres.in/", 
		"Snapshot=t11.inf", 
		"LAST");

	web_url("v3", 
		"URL=https://js.stripe.com/v3/", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t12.inf", 
		"LAST");

	web_url("email-decode.min.js", 
		"URL=https://reqres.in/cdn-cgi/scripts/5c5dd728/cloudflare-static/email-decode.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t13.inf", 
		"LAST");

	web_url("fastclick.min.js", 
		"URL=https://cdnjs.cloudflare.com/ajax/libs/fastclick/1.0.3/fastclick.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t14.inf", 
		"LAST");

	web_url("app.js", 
		"URL=https://reqres.in/js/app.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t15.inf", 
		"LAST");

	web_url("gtm.js", 
		"URL=https://www.googletagmanager.com/gtm.js?id=GTM-KB622KF", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t16.inf", 
		"LAST");

	web_url("js", 
		"URL=https://www.googletagmanager.com/gtag/js?id=UA-174008107-1", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t17.inf", 
		"LAST");

	web_concurrent_end(0);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_url("polished-butterfly-j17lt", 
		"URL=https://codesandbox.io/embed/polished-butterfly-j17lt?autoresize=1&fontsize=14&theme=dark&view=preview", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://reqres.in/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

	web_concurrent_start(0);

	web_url("css", 
		"URL=https://fonts.googleapis.com/css?family=Roboto:300,400,500,700|Source%20Code%20Pro:500", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t19.inf", 
		"LAST");

	web_url("v84a3a4012de94ce1a686ba8c167c359c1696973893317", 
		"URL=https://static.cloudflareinsights.com/beacon.min.js/v84a3a4012de94ce1a686ba8c167c359c1696973893317", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t20.inf", 
		"LAST");

	web_url("npm.svg", 
		"URL=https://cdn.jsdelivr.net/gh/PKief/vscode-material-icon-theme@master/icons/npm.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t21.inf", 
		"LAST");

	web_url("typescript.svg", 
		"URL=https://cdn.jsdelivr.net/gh/PKief/vscode-material-icon-theme@master/icons/typescript.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t22.inf", 
		"LAST");

	web_url("21.png", 
		"URL=https://screenshots.codesandbox.io/j17lt/21.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t23.inf", 
		"LAST");

	web_url("css.svg", 
		"URL=https://cdn.jsdelivr.net/gh/PKief/vscode-material-icon-theme@master/icons/css.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t24.inf", 
		"LAST");

	web_url("868803", 
		"URL=https://avatars.githubusercontent.com/u/868803?v=4", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t25.inf", 
		"LAST");

	web_url("KFOlCnqEu92Fr1MmEU9fBBc4.woff2", 
		"URL=https://fonts.gstatic.com/s/roboto/v30/KFOlCnqEu92Fr1MmEU9fBBc4.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t26.inf", 
		"LAST");

	web_url("KFOlCnqEu92Fr1MmWUlfBBc4.woff2", 
		"URL=https://fonts.gstatic.com/s/roboto/v30/KFOlCnqEu92Fr1MmWUlfBBc4.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t27.inf", 
		"LAST");

	web_url("HI_diYsKILxRpg3hIP6sJ7fM7PqPMcMnZFqUwX28DP6QtMlrTA.woff2", 
		"URL=https://fonts.gstatic.com/s/sourcecodepro/v23/HI_diYsKILxRpg3hIP6sJ7fM7PqPMcMnZFqUwX28DP6QtMlrTA.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t28.inf", 
		"LAST");

	web_url("KFOmCnqEu92Fr1Mu4mxK.woff2", 
		"URL=https://fonts.gstatic.com/s/roboto/v30/KFOmCnqEu92Fr1Mu4mxK.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t29.inf", 
		"LAST");

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASJwkRnmFQ0MKKWRIFDZFhlU4SBQ2RYZVOEgUNlJCS-iFR-NIDgSdHXQ==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASJwkRnmFQ0MKKWRIFDZFhlU4SBQ2RYZVOEgUNlJCS-iFR-NIDgSdHXQ==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"LAST");

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASNQl_POqPQtW6chIFDQbtu_8SBQ2RYZVOEgUNkWGVThIFDZFhlU4SBQ2UkJL6Ib559mcIUYDr", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASNQl_POqPQtW6chIFDQbtu_8SBQ2RYZVOEgUNkWGVThIFDZFhlU4SBQ2UkJL6Ib559mcIUYDr?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"LAST");

	web_concurrent_end(0);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(5);

	web_url("m-outer-3437aaddcdf6922d623e172c2d6f9278.html", 
		"URL=https://js.stripe.com/v3/m-outer-3437aaddcdf6922d623e172c2d6f9278.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://reqres.in/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"LAST");

	web_concurrent_start(0);

	web_url("prettierrc.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/prettierrc.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t33.inf", 
		"LAST");

	web_url("jsconfig.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/jsconfig.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t34.inf", 
		"LAST");

	web_url("tsconfig.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/tsconfig.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t35.inf", 
		"LAST");

	web_url("m-outer-15a2b40a058ddff1cffdb63779fe3de1.js", 
		"URL=https://js.stripe.com/v3/fingerprinted/js/m-outer-15a2b40a058ddff1cffdb63779fe3de1.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://js.stripe.com/v3/m-outer-3437aaddcdf6922d623e172c2d6f9278.html", 
		"Snapshot=t36.inf", 
		"LAST");

	web_url("package.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/package.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t37.inf", 
		"LAST");

	web_concurrent_end(0);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("inner.html", 
		"URL=https://m.stripe.network/inner.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://js.stripe.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("out-4.5.43.js", 
		"URL=https://m.stripe.network/out-4.5.43.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://m.stripe.network/inner.html", 
		"Snapshot=t39.inf", 
		"LAST");

	lr_think_time(5);

	web_custom_request("6", 
		"URL=https://m.stripe.com/6", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://m.stripe.network/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body="
		"JTdCJTIydjIlMjIlM0ExJTJDJTIyaWQlMjIlM0ElMjJiMDFlNDcyZTMwNWMxZGU5YTliYjFhZjg0MDg5ZGQ4ZCUyMiUyQyUyMnQlMjIlM0EyNzIuNiUyQyUyMnRhZyUyMiUzQSUyMjQuNS40MyUyMiUyQyUyMnNyYyUyMiUzQSUyMmpzJTIyJTJDJTIyYSUyMiUzQSU3QiUyMmElMjIlM0ElN0IlMjJ2JTIyJTNBJTIyZmFsc2UlMjIlMkMlMjJ0JTIyJTNBMC4zJTdEJTJDJTIyYiUyMiUzQSU3QiUyMnYlMjIlM0ElMjJmYWxzZSUyMiUyQyUyMnQlMjIlM0EwLjElN0QlMkMlMjJjJTIyJTNBJTdCJTIydiUyMiUzQSUyMmVuLUdCJTIyJTJDJTIydCUyMiUzQTAuMiU3RCUyQyUyMmQlMjIlM0ElN0IlMjJ2JTIyJTNBJTIyV2luMzIlMjIlMkMlMjJ0JTIyJTNBMCU3RCUyQyUyMm"
		"UlMjIlM0ElN0IlMjJ2JTIyJTNBJTIyUERGJTIwVmlld2VyJTJDaW50ZXJuYWwtcGRmLXZpZXdlciUyQ2FwcGxpY2F0aW9uJTJGcGRmJTJDcGRmJTJCJTJCdGV4dCUyRnBkZiUyQ3BkZiUyQyUyMENocm9tZSUyMFBERiUyMFZpZXdlciUyQ2ludGVybmFsLXBkZi12aWV3ZXIlMkNhcHBsaWNhdGlvbiUyRnBkZiUyQ3BkZiUyQiUyQnRleHQlMkZwZGYlMkNwZGYlMkMlMjBDaHJvbWl1bSUyMFBERiUyMFZpZXdlciUyQ2ludGVybmFsLXBkZi12aWV3ZXIlMkNhcHBsaWNhdGlvbiUyRnBkZiUyQ3BkZiUyQiUyQnRleHQlMkZwZGYlMkNwZGYlMkMlMjBNaWNyb3NvZnQlMjBFZGdlJTIwUERGJTIwVmlld2VyJTJDaW50ZXJuYWwtcGRmLXZpZXdlciUyQ2FwcGxpY2F0aW9uJTJG"
		"cGRmJTJDcGRmJTJCJTJCdGV4dCUyRnBkZiUyQ3BkZiUyQyUyMFdlYktpdCUyMGJ1aWx0LWluJTIwUERGJTJDaW50ZXJuYWwtcGRmLXZpZXdlciUyQ2FwcGxpY2F0aW9uJTJGcGRmJTJDcGRmJTJCJTJCdGV4dCUyRnBkZiUyQ3BkZiUyMiUyQyUyMnQlMjIlM0ExJTdEJTJDJTIyZiUyMiUzQSU3QiUyMnYlMjIlM0ElMjIxMjgwd182ODBoXzI0ZF8xciUyMiUyQyUyMnQlMjIlM0EwLjElN0QlMkMlMjJnJTIyJTNBJTdCJTIydiUyMiUzQSUyMjUuNSUyMiUyQyUyMnQlMjIlM0EwLjIlN0QlMkMlMjJoJTIyJTNBJTdCJTIydiUyMiUzQSUyMmZhbHNlJTIyJTJDJTIydCUyMiUzQTAuMSU3RCUyQyUyMmklMjIlM0ElN0IlMjJ2JTIyJTNBJTIyc2Vzc2lvblN0b3JhZ2UtZW5hYm"
		"xlZCUyQyUyMGxvY2FsU3RvcmFnZS1lbmFibGVkJTIyJTJDJTIydCUyMiUzQTEuNCU3RCUyQyUyMmolMjIlM0ElN0IlMjJ2JTIyJTNBJTIyMDEwMDEwMDEwMDAxMTAwMDEwMTAwMDEwMTEwMDAxMDEwMTAxMDAxMDAxMDExMTExMDExMTExMSUyMiUyQyUyMnQlMjIlM0EyNjguNiUyQyUyMmF0JTIyJTNBMjAyLjUlN0QlMkMlMjJrJTIyJTNBJTdCJTIydiUyMiUzQSUyMiUyMiUyQyUyMnQlMjIlM0EwJTdEJTJDJTIybCUyMiUzQSU3QiUyMnYlMjIlM0ElMjJNb3ppbGxhJTJGNS4wJTIwKFdpbmRvd3MlMjBOVCUyMDEwLjAlM0IlMjBXaW42NCUzQiUyMHg2NCklMjBBcHBsZVdlYktpdCUyRjUzNy4zNiUyMChLSFRNTCUyQyUyMGxpa2UlMjBHZWNrbyklMjBDaHJvbWUlMkYx"
		"MjEuMC4wLjAlMjBTYWZhcmklMkY1MzcuMzYlMjIlMkMlMjJ0JTIyJTNBMC4xJTdEJTJDJTIybSUyMiUzQSU3QiUyMnYlMjIlM0ElMjIlMjIlMkMlMjJ0JTIyJTNBMC4xJTdEJTJDJTIybiUyMiUzQSU3QiUyMnYlMjIlM0ElMjJmYWxzZSUyMiUyQyUyMnQlMjIlM0ExMDQuMyUyQyUyMmF0JTIyJTNBMC43JTdEJTJDJTIybyUyMiUzQSU3QiUyMnYlMjIlM0ElMjJhY2I3ZDVmMDlkZjU0ZTMzMzFjZDI0NzU3ZTEzMTVjNCUyMiUyQyUyMnQlMjIlM0E0NS43JTdEJTdEJTJDJTIyYiUyMiUzQSU3QiUyMmElMjIlM0ElMjIlMjIlMkMlMjJiJTIyJTNBJTIyaHR0cHMlM0ElMkYlMkZzS1JBS1pSUDh4NDFMbDA0RU9fR1RfUE5FSkR3Wmt6Rnd6YmExbGZ6LVlzLmpaWHBzczhORm"
		"8zQU5IZ0ZMQTRlN2dqMVJ4Y3NkSGd1c2d2RjQzSmZaWDglMkYlMjIlMkMlMjJjJTIyJTNBJTIyJTIyJTJDJTIyZCUyMiUzQSUyMk5BJTIyJTJDJTIyZSUyMiUzQSUyMk5BJTIyJTJDJTIyZiUyMiUzQWZhbHNlJTJDJTIyZyUyMiUzQXRydWUlMkMlMjJoJTIyJTNBdHJ1ZSUyQyUyMmklMjIlM0ElNUIlMjJsb2NhdGlvbiUyMiU1RCUyQyUyMmolMjIlM0ElNUIlNUQlMkMlMjJuJTIyJTNBMTE4OS40MDAwMDAwMDU5NjA1JTJDJTIydSUyMiUzQSUyMnJlcXJlcy5pbiUyMiUyQyUyMnclMjIlM0ElMjIxNzA3MjEzMzk5MDE3JTNBMzAyZDA4ZmUwZjZhNjM4ZGFlODliYjBlMjcwY2NmOGViZTYzN2EwYTYyNjVlNTBkZGU3N2Y4ZGI4YTZjNzgyMiUyMiU3RCUyQyUyMmglMjIl"
		"M0ElMjI0ODUzYjI5ZTNmYzk0MTQ3MGUwMSUyMiU3RA==", 
		"LAST");

	web_custom_request("httpapi", 
		"URL=https://stats.codesandbox.io/2/httpapi", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(15);

	web_custom_request("users", 
		"URL=https://reqres.in/api/users?page=2", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"LAST");

	 

	web_concurrent_start(0);

	web_url("js_2", 
		"URL=https://www.googletagmanager.com/gtag/js?id=UA-174008107-1&l=dataLayer&cx=c", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t43.inf", 
		"LAST");

	web_url("js_3", 
		"URL=https://www.googletagmanager.com/gtag/js?id=G-CESXN06JTW&l=dataLayer&cx=c", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t44.inf", 
		"LAST");

	web_concurrent_end(0);

	 

	web_add_cookie("_ga_CESXN06JTW=GS1.1.1707213607.1.0.1707213607.0.0.0; DOMAIN=reqres.in");

	web_add_cookie("_ga=GA1.1.192723986.1707213608; DOMAIN=reqres.in");

	lr_think_time(206);

	web_custom_request("users_2", 
		"URL=https://reqres.in/api/users", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"name\":\"morpheus\",\"job\":\"leader\"}", 
		"LAST");

	 

	lr_think_time(10);

	web_custom_request("2", 
		"URL=https://reqres.in/api/users/2", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"Body={\"name\":\"morpheus\",\"job\":\"zion resident\"}", 
		"LAST");

	 

	lr_think_time(9);

	web_custom_request("2_2", 
		"URL=https://reqres.in/api/users/2", 
		"Method=PATCH", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"Body={\"name\":\"morpheus\",\"job\":\"zion resident\"}", 
		"LAST");

	 

	lr_think_time(17);

	web_custom_request("2_3", 
		"URL=https://reqres.in/api/users/2", 
		"Method=DELETE", 
		"Resource=0", 
		"Referer=https://reqres.in/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"LAST");

	return 0;
}
# 5 "d:\\lr scripts\\reqres\\\\combined_ReqRes.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "d:\\lr scripts\\reqres\\\\combined_ReqRes.c" 2

