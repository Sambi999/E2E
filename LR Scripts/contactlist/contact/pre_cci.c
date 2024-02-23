# 1 "d:\\lr scripts\\contactlist\\contact\\\\combined_contact.c"
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







 
 



















# 1 "d:\\lr scripts\\contactlist\\contact\\\\combined_contact.c" 2

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

 
 
 

                               


 
 
 





















# 2 "d:\\lr scripts\\contactlist\\contact\\\\combined_contact.c" 2

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




 
 




# 3 "d:\\lr scripts\\contactlist\\contact\\\\combined_contact.c" 2

# 1 "vuser_init.c" 1
 







vuser_init()
{


	return 0;
}
# 4 "d:\\lr scripts\\contactlist\\contact\\\\combined_contact.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("Telemetry.Request", 
		"URL=https://nw-umwatson.events.data.microsoft.com/Telemetry.Request", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"BodyBinary=\\x8A\\x0E\\x00\\x00<?xml version=\"1.0\"?>\n<req ver=\"2\">\n <tlm>\n  <src>\n   <desc>\n    <mach>\n     <os>\n      <arg nm=\"vermaj\" val=\"10\"/>\n      <arg nm=\"vermin\" val=\"0\"/>\n      <arg nm=\"verbld\" val=\"19045\"/>\n      <arg nm=\"vercsdbld\" val=\"3324\"/>\n      <arg nm=\"verqfe\" val=\"3324\"/>\n      <arg nm=\"csdbld\" val=\"3324\"/>\n      <arg nm=\"versp\" val=\"0\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"lcid\" val=\"1033\"/>\n      <arg nm=\""
		"geoid\" val=\"113\"/>\n      <arg nm=\"sku\" val=\"48\"/>\n      <arg nm=\"domain\" val=\"0\"/>\n      <arg nm=\"portos\" val=\"0\"/>\n      <arg nm=\"ram\" val=\"12286\"/>\n      <arg nm=\"svolsz\" val=\"149\"/>\n      <arg nm=\"wimbt\" val=\"0\"/>\n      <arg nm=\"blddt\" val=\"191206\"/>\n      <arg nm=\"bldtm\" val=\"1406\"/>\n      <arg nm=\"bldbrch\" val=\"vb_release\"/>\n      <arg nm=\"os\" val=\"Windows\"/>\n      <arg nm=\"osver\" val=\"10.0.19041.3324.amd64fre.vb_release.191206-1406\"/"
		">\n      <arg nm=\"buildflightid\" val=\"\"/>\n      <arg nm=\"expid\" val=\"\"/>\n      <arg nm=\"edition\" val=\"Professional\"/>\n     </os>\n     <hw>\n      <arg nm=\"form\" val=\"1\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"deviceclass\" val=\"Windows.Desktop\"/>\n      <arg nm=\"sysmfg\" val=\"VMware, Inc.\"/>\n      <arg nm=\"syspro\" val=\"VMware7,1\"/>\n      <arg nm=\"bv\" val=\"VMW71.00V.16707776.B64.2008070230\"/>\n      <arg nm=\"ram\" val=\"12288\"/>\n      <arg nm=\""
		"proccnt\" val=\"4\"/>\n      <arg nm=\"proclsp\" val=\"2095\"/>\n      <arg nm=\"wscpusc\" val=\"0\"/>\n      <arg nm=\"wsdsksc\" val=\"0\"/>\n      <arg nm=\"wscpudn\" val=\"Intel(R) Xeon(R) Gold 6230 CPU @ 2.10GHz\"/>\n      <arg nm=\"wsdgsc\" val=\"0\"/>\n      <arg nm=\"aoac\" val=\"0\"/>\n      <arg nm=\"bssku\" val=\"\"/>\n      <arg nm=\"chid\" val=\"{e66fedaa-d317-5223-84c7-2eb45f71c90f}\"/>\n      <arg nm=\"sdksz\" val=\"350\"/>\n     </hw>\n     <ctrl>\n      <arg nm=\"tm\" val=\""
		"133523003711432180\"/>\n      <arg nm=\"mid\" val=\"C2D308F8-25AB-49B9-9B4A-F8F443F15738\"/>\n      <arg nm=\"sample\" val=\"42234205\"/>\n      <arg nm=\"msft\" val=\"0\"/>\n      <arg nm=\"test\" val=\"0\"/>\n      <arg nm=\"scf\" val=\"0\"/>\n      <arg nm=\"commercialid\" val=\"\"/>\n      <arg nm=\"telemetry\" val=\"Optional\"/>\n     </ctrl>\n    </mach>\n   </desc>\n  </src>\n  <reqs>\n   <req key=\"1\">\n    <namespace svc=\"watson\" ptr=\"generic\" gp=\"generic\" app=\"msedge.exe\">\n    "
		" <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"121.0.2277.112\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"121.0.2277.112\"/>\n     <arg nm=\"p5\" val=\"3081623\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n    </namespace>\n    <ctrl>\n     <arg nm=\"reportid\" val=\"0933f3dd-977f-44f1-b723-71187c3a805e\"/>\n     <arg nm=\"procmeta.Channel\" val=\"\"/>\n     <arg nm=\""
		"procmeta.MetricsClientId\" val=\"ef638bb3-0e27-43db-b180-ab00c9ce58ac\"/>\n     <arg nm=\"procmeta.MetricsClientIdHash\" val=\"-6926658363340494177\"/>\n     <arg nm=\"procmeta.MetricsSessionId\" val=\"116\"/>\n     <arg nm=\"procmeta.OfficialBuild\" val=\"1\"/>\n     <arg nm=\"procmeta.RuntimeVariationsSeedETag\" val=\"&quot;9JTaHLbLIoXB8Hrf7MmbKc5uR2GodGlO3xbl+MUBQBk=&quot;\"/>\n     <arg nm=\"procmeta.UXConfigCorrelationId\" val=\"32qeUCA7hshktCZh1abcGQK57j/DHwPFKIKKw/Hmq4I=\"/>\n     <arg nm="
		"\"procmeta.VariationsSeedETag\" val=\"&quot;x8JScx5/eTR/nZqtUeYCjrTS4iMf1QA2Q1S0ErJA1Ks=&quot;\"/>\n    </ctrl>\n    <cmd nm=\"event\">\n     <arg nm=\"eventtype\" val=\"crashpad_exp\"/>\n     <arg nm=\"cat\" val=\"generic\"/>\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"121.0.2277.112\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"121.0.2277.112\"/>\n     <arg nm=\"p5\" val=\"3081623\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\""
		"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n     <arg nm=\"appsessionguid\" val=\"00002448-0002-0035-d2a4-aae4765eda01\"/>\n    </cmd>\n   </req>\n  </reqs>\n </tlm>\n</req>\n", 
		"LAST");

	web_add_cookie("MUID=3FB288A77D7E6FC13A379A107C2C6E33; DOMAIN=business.bing.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=business.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=3BE0431A9B0049D9A20B0E44F490E096&dmnchg=1; DOMAIN=business.bing.com");

	web_add_cookie("MMCASM=ID=D2631CDB20CA4BC9B1D178BCF01A27A6; DOMAIN=business.bing.com");

	web_add_cookie("SRCHUSR=DOB=20230213&T=1698920020000; DOMAIN=business.bing.com");

	web_add_cookie("BFBUSR=BAWAS=1&BAWFS=1; DOMAIN=business.bing.com");

	web_add_cookie("EDGSRCHHPGUSR=CIBV=1.1276.5-affinity; DOMAIN=business.bing.com");

	web_add_cookie("ABDEF=V=13&ABDV=13&MRNB=1700625981797&MRB=0; DOMAIN=business.bing.com");

	web_add_cookie("MSPTC=2UrbhxqCe5C1nsXUroHsuMEG1tnzKiN7Z7Xc90Nput4; DOMAIN=business.bing.com");

	web_add_cookie("BFB=AxBJEYsa3zk8WmJEU7BHBGJ498iHLZI4XXvH77X-c14cQseTlnaWL3-WMrKVcoInacJKuAqBD7JkcpY32ZgmUk-E2UqiO0TshzYeAYL6LylFpt324a9HRVNVUW9M53Uc-dorfYnVjDpORzvsuk3zt5l4IYA-lkTa6Jd6kBSe6oJGtwDa7Ns9oP6U7vVRqRhG5XA; DOMAIN=business.bing.com");

	web_add_cookie("_BINGNEWS=SW=1217&SH=529; DOMAIN=business.bing.com");

	web_add_cookie("USRLOC=HS=1&ELOC=LAT=12.944945335388184|LON=77.60617065429688|N=Bengaluru%20South%2C%20Karnataka|ELT=9|&CLOC=LAT=12.9378|LON=77.547|A=10476|TS=240213042719|SRC=I&BID=MjQwMjEzMDk1NzE5XzQ2YzJjNGFkMGMyYTllYWFkYmE1OTNjZjRhNjI1NGI2MTYyNDYxZWZlMTcxZmJiN2RkMjAwZGQ0MmRhNDZmOTE=; DOMAIN=business.bing.com");

	web_add_cookie("ACLUSR=T=1706937074000; DOMAIN=business.bing.com");

	web_add_cookie("_RwBf=r=0&ilt=123&ihpd=0&ispd=3&rc=200&rb=0&gb=0&rg=200&pc=200&mtu=0&rbb=0&g=0&cid=&clo=0&v=3&l=2024-02-02T08:00:00.0000000Z&lft=0001-01-01T00:00:00.0000000&aof=0&o=2&p=&c=&t=0&s=0001-01-01T00:00:00.0000000+00:00&ts=2024-02-03T05:21:48.2632016+00:00&rwred=0&wls=&wlb=&lka=0&lkt=1&TH=&aad=1&ccp=&wle=&ard=0001-01-01T00:00:00.0000000&rwdbt=0001-01-01T00:00:00.0000000&rwflt=0001-01-01T00:00:00.0000000; DOMAIN=business.bing.com");

	web_add_cookie("SRCHHPGUSR=SRCHLANG=en&DM=0&IG=4BD6E2C0D93E4CE797A2BDE556915994&PV=10.0.0&BRW=N&BRH=S&CW=1232&CH=572&SCW=1217&SCH=4133&DPR=1.0&UTC=330&CIBV=1.1536.2&EXLTT=31&HV=1707110847&PRVCW=1232&PRVCH=572&SPLSCR=1; DOMAIN=business.bing.com");

	web_add_cookie("OID=AxARN5hDKnyO3ZU8bYkqbQmftCnypZxP3u0zK1xtLfEQyAi-wXZWqbP7rEqv-UB1QTBbhnM_WLNQw0Glw9upKTIyYnhQXWXNckLBMowElyJd67zWU0cTRjB7jrKoJVUAqGiEuYxi6zYIuVOEqzzC4guh; DOMAIN=business.bing.com");

	web_add_cookie("OIDI="
		"gxBLvpFKysjtlKZpHn5ntc0cHStK_pO4WMtfjwALGH7UEMO8YN3-esIR765rNdjwL25YatZZry-w7PNva9X4o-xT6YpXbubHJ0qeLxXMlDnsgICkL63dJDX0V8nerhJbQa-wj0azGiMTehNvlofKcwr7R2qmAuQiSbOG1aZUe334BI2c1Askk1a8unqHR9JeDNhxL89c8pjlUXTKFnWxBjKCfoMW7EVswV-fHrOMJbrfgCtxm5rYSIEpRG3zSe_FF9ZMyAFOBKjJOBqmA7bOaOFkNC3C_2nfFrZfoRc8FzmWMs7EtL3CwQxFDRR64txBHESGnoexC-J-MkipmDXdqU2nDa4yKACLxp2iFzPj0cCvssqL9wpg6OUeEZkOo3wSVJXLJnUQwMdxFzBZzMN1ZlS1DYUzGUCqNXswWe87HsuuxwPkLYmElZ-Atza--qwbdIe4EKnQzzcuF7X23t35aPZzJKIz9dLcN3KLfkCkUBybKAO01yhyGv"
		"RwrmCTKrHcMPgOsrvyyJVTgChbVnv3-_K4B18uE8fcZOB3NHd8nP1C-jdq2T4g8d9QLweJqWpkzcbpjPX2WlHqg_9Gmz1awzWuvMV7Q-VSj6LEjgIgAc2HxjWlniFmngHAIm5zFW9e-KquO5BJGdrbiy42APolcCU1sHaj5pmnAioY24iRsfg1Iw_cXpdnfgCLbr5A1fNJSGqbKvPXgVyZfqtCqH2jDoEqlAqUTcFtxzMZvHjU2pUCwGKJEhzLQhVI7_G_vagefUl1lgzF74LumBnuBOH2y8XcdW364XymfNsLuwL28XE6w_DFvUlWAwKEqdlIlh9Gurz4QaIShXUSuymawPE2yZKXxcJBtWFUOXj-DKtzepiOJOBKsVCZ3UVcZLdT2w2qLxovdijhro5230EVvhwV-wXoQQMvOGhHe3-BayAyJuz4L9swrt2oMV9w19fUTeGBx95e1xNX3BJrxHerl_jWbsOqb5YKi_01ZuEbjZvRUHSP"
		"2WTiSsGIHSazqWEeDRAblMhkFnTg4nJM-mtnJ_CGeBmks4YVYWTcJvAtNfH5mhN_kE9Y2764oRAe4vbCxoJmCi1sWudOcisXneHuP3xS85QfQj4H5M5IzIAm2FQ-Eqe06bEGFvmucN0hHdt65BiHt7_szHPgB5rdj88zWSqcMU-udQ_tYKkTv5Y1bjM7a1JNR7-4sJsdXwb02hz6xjPf6mlZnlrJOpuTNjeqrCmcNLuDPNKzN-QXX5EqSDzd8z7c5QWvOpHzecqokzEYhwIK-yKbFdDo5Mjw0vECKm_-z-pMxBkqyBIB2jNFySUCNz-mJV5TJof5tkhXHO7pcBvc5OCiYieb5NB-1h1zsSXCqLP6UfAiFMeHtz0YiYXPG8f9e-2o3L7Q8hsBdZVnZJHcoQlNRinRXglm641nMFLtVo3w_3Og07sI8pvaz8DpVOpvYGD3E1ihbjmQxXJhtbKywFXiXcI41W6Na-HmOOAw70L0e9SC8VSRcz"
		"a9knREAsUIDnZpdXPFOqXW_tMdfkaZ8XUMCJ2DGxnf_kXh0ijzBWVxU1DpLYwO7AYGrfGMirDnLXOowgQCyAaekixdAOfhupOsWHobesyOs5yY8zUhU83wQ8CwTykGlWZXhZTAZXaYlJJ9Az1UiQ7bHn4xOlSjLmDPBBnYZ8dDBguJmxMg3WMX_Cv8YvkQvYEXceVarOsKL24lcPm6czD06nJpON03ayXP424r4lISprYURTq8WDT8U5uN1T57pnGFK7x8WusqUSLqU5tbyQ3GalUn4L1LkZshrICTWbBtS_pcaRQtIolMMR9DgR20yjAOathdW054bhZi5wrKiwa0GiWZ1RnftMfrdqql4rIrNvQifSPWoEBmi36zOUKBBDaQKti0TP7yTWasHjRtbnqIKIjAGVi4sjKDm5OTCdGrbz02J3Bp4x1gCTXU3MMquTC1hBXejR4uktFnLzLgyGcX24rPt6bpGpkn_jj1tSy3mA5j6rdnAPN2"
		"ws-Xz2ndnOSWvN3CqYO4Sg; DOMAIN=business.bing.com");

	web_add_cookie("OIDR="
		"gxCfvmMSON0YaZN5LmQ_CGDzbmZ0ebAZdPe8cm_SPeeixBkLmECt7jFhtVTHSUp1812iUnCconrvT2VwT07HlFI8S3c0ffOZtPXyimk5UNdH8SQyz9CavFDgeo1ORIfhHAvpWAmLHsgFxeW3hKWpdlC2nz1eGzWS1P8gVW5hCzEYeUqFDS7MCq7z9fuB8AqryduBgySgyZHom6-EMZbsSpprdDXntjoTAa8c1DKD1TpinUX8QqpfUBdVE3mWMwy2ku7KIeICKkyWUr5MgAEsraUhmr5z9TQZyyORJvKv9BaH8hq-wKW15UkDsFLIsCPVbGHvWUwtDA5prnEF808EErjTV8Wlm_kqu4IHNcOYaA4gA_dXwHLn_J4UThHjv1nH00yBQ1Io8PzSccTR6PvEaBwmsB6SX9wJzIh8n06ciGdp1zUTKM7HTjdAmIi5r_77snAr99aU0obMWI7vIWZRwghBxSZ9XY8hTqjgmFXBYfucL-3wEC2_w8"
		"8w2TzEQzTEKP18T2zWrLjwTrKwg1fqd-IfBGDpyxcu8yeev_XTEEJwk5hx39866zI4WcOCB1sMM63ip8_Ld0cG8XTv2Io180vbFwLo40nmqg6memC55XbL90bVXasSPsxMDdb-vpZV_Gq-oA8fRYeXeHOMhY9Afb-3tz7Ji55OIWW8zZiQh5mk4OFkw4mN0PT8QsI7NKnKLX608WmCulcpPG0rTbKY_JJYNoe9ABu7UsObhf_dGZ4cNQ3mOWOYh0ip9ImzyQByCnZOMAYODEhWiAsjU9dVsVoMeSF8ZEPr7QI2OTAapfHNsqAhb-kteLrt0WMlA2KFRivX8mk8X-4LY6bjYJ3P3YRCWJt_pTUJc7HW4S_Wpv0lqpzg0pW0v0xptQjpZu4kXxidMuEtyDlPkf3kpPyTGcxUkO7yms00Nq_EXYjHOaZ29W5BcD4I7fxNdPcq0LM5fSVMkYcmNyKuWQH-b196z7hu7f99sjI61kCsK3Z9NYUu"
		"VLcb5d2qg95BQbrDi5DpASa_vHTU-NJtTW2bJnDeo9KIIynfsj329yE_1I--e-aG6vCOuMgOL8ZbIO_LxDmiv6xhoUegl4PVJZdZUoaeFokUFLBOJz5lBCDiCnF5G0mEPzInG8ZqFjhnpgpvvlxM4b-Tq3-LtquCqrowfQ3hZ9ntT6muB2onNW3DPjd6fHRfw_OlGEbY4m_8YiA9AFIAxf8; DOMAIN=business.bing.com");

	web_add_cookie("ACL=AxAu1gxqXBdEMSHFIr4EpYry_4Nhon8Dce6c5gDbZSc4TCgBzj249cKImZ0y4GOK_q8kcL7cstmKtWjlDKHaeEfw; DOMAIN=business.bing.com");

	web_url("settingswithflights", 
		"URL=https://business.bing.com/work/api/v2/tenant/my/settingswithflights?&clienttype=edge-omnibox", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	

	web_set_sockets_option("TLS_SNI", "0");

	web_url("flipkart.com", 
		"URL=https://flipkart.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("report_2", 
		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":13,\"body\":{\"elapsed_time\":3025,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":1.0,\"server_ip\":\"13.107.6.158\",\"status_code\":401,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://business.bing.com/api/v1/user/token/microsoftgraph?&clienttype=edge-omnibox\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/"
		"121.0.0.0\"}]", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "1");

	

	

	web_set_sockets_option("TLS_SNI", "0");

	web_add_cookie("vh=606; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("vw=1272; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("dpr=1; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C19767; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("Network-Type=4g; DOMAIN=2.rome.api.flipkart.com");

	

	

	web_set_sockets_option("TLS_SNI", "1");

	

	web_set_sockets_option("TLS_SNI", "0");

	web_url("codes.json", 
		"URL=https://static-assets-web.flixcart.com/www/linchpin/batman-returns/codes.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("collector", 
		"URL=https://collector-pxgnttli3a.px-cdn.net/api/v2/collector", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"Body=payload=aUkQRhAIEGJqAwACCwcQHhBWEAhJEGJqAwMEBgcQCBBaRkZCQQgdHUVFRRxUXltCWVNARhxRXV8dEB4QYmoDAAACBRAIAh4QYmoDAAYHChAIEGVbXAEAEB4QYmoDAwsCABAIAh4QYmoDAwcEAhAIAwIDAgIeEGJqAwG^AABSgoQCAEEAgIeEGJqAwMBCgcQCAMFAg}DUKAAQFNCgIDAgseEGJKqAwAACgIQCA8MFDAgUKAAQNaFCgIDCgAeEGJqAwM>GCwQQCBAACwAEDAVFXA`K}Gh9RUwRTHwMDV1cfC1ZWAx8DC1cGVANWVlYDAgYQHhBiagMABwKQ7GEAhcR15eHhBiagMABwQHEAgfAx4QYmo7DAwEFCxAIVFNeQVdPT28=&appId=PXgNtTli3A&tag=v8.7.8&uuid=29263ce0-ca6a-11ee-9dd1-19e4f1ddd104&ft=318&seq=0&en=NTA&pc="
		"6889643062592880&rsc=3", 
		"LAST");

	web_add_cookie("AMCVS_17EB401053DAF4840A490D4C%40AdobeOrg=1; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C19767%7CMCMID%7C64661683922883419631748055552660139383%7CMCAAMLH-1708431581%7C12%7CMCAAMB-1708431581%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1707833981s%7CNONE%7CMCAID%7CNONE; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("gpv_pn=HomePage; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("gpv_pn_t=FLIPKART%3AHomePage; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("pxcts=711478f1-ca6b-11ee-b534-aafce86b5791; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("_pxvid=71146fe0-ca6b-11ee-b534-69cb5dc59218; DOMAIN=2.rome.api.flipkart.com");

	
	lr_think_time(26);

	

	
		
	
	
	web_add_cookie("S=d1t17Py4EAiw/P1M/GT88P2c/P26j9ANQN/L893VucQPId187ToiOAIIviLg1Kdq+YSTXMd9McP0OHKdEEtvpDabsdg==; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("s_sq=flipkart-prd%3D%2526pid%253DHomePage%2526pidt%253D1%2526oid%253DSearch%252520Icon%2526oidt%253D3%2526ot%253DSUBMIT; DOMAIN=2.rome.api.flipkart.com");

	
	web_add_cookie("vh=606; DOMAIN=www.flipkart.com");

	web_add_cookie("vw=1272; DOMAIN=www.flipkart.com");

	web_add_cookie("dpr=1; DOMAIN=www.flipkart.com");

	web_add_cookie("fonts-loaded=en_loaded; DOMAIN=www.flipkart.com");

	web_add_cookie("Network-Type=4g; DOMAIN=www.flipkart.com");

	web_add_cookie("isH2EnabledBandwidth=true; DOMAIN=www.flipkart.com");

	web_add_cookie("h2NetworkBandwidth=9; DOMAIN=www.flipkart.com");

	web_add_cookie("AMCVS_17EB401053DAF4840A490D4C%40AdobeOrg=1; DOMAIN=www.flipkart.com");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C19767%7CMCMID%7C64661683922883419631748055552660139383%7CMCAAMLH-1708431581%7C12%7CMCAAMB-1708431581%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1707833981s%7CNONE%7CMCAID%7CNONE; DOMAIN=www.flipkart.com");

	web_add_cookie("gpv_pn=HomePage; DOMAIN=www.flipkart.com");

	web_add_cookie("gpv_pn_t=FLIPKART%3AHomePage; DOMAIN=www.flipkart.com");

	web_add_cookie("pxcts=711478f1-ca6b-11ee-b534-aafce86b5791; DOMAIN=www.flipkart.com");

	web_add_cookie("_pxvid=71146fe0-ca6b-11ee-b534-69cb5dc59218; DOMAIN=www.flipkart.com");

	web_add_cookie("_px3=2df9703546500bc7e69fa8a6127e27dedfb4a2c7d69eef87b46c7b371d03bf51:ZUmqk4oCu+9ceYHEMTvF9rVxbC7T6QV/jtD6iiHdgsivfN3k3Bxq2TuryOLrN5cvIBJiQ12l+Kbsdddi71x9QQ==:1000:vBXOhbhC6n/EaNEcHmG2tll9ab0cD/Nx+5UacK0m9sUt5/WMxBDDgy3YFhTZ/iArMoXprpW57Q7hBVg2krcKFvB+FWm6PGObNpBw2tNVONVhzSTn5ikiqoNPbbh/URoKwPw/4zAE2n6ilLtu4IVuQ5zItyUagDOlkz3qCC/WlsW8mwQ7s6U7yhvKiv7PS1AA8rNgWNg1bk6hZWUS3jOWrguJUYxioeOzuuAQUU6vTrM=; DOMAIN=www.flipkart.com");

	web_add_cookie("s_sq=flipkart-prd%3D%2526pid%253DHomePage%2526pidt%253D1%2526oid%253DSearch%252520Icon%2526oidt%253D3%2526ot%253DSUBMIT; DOMAIN=www.flipkart.com");

	web_url("search", 
		"URL=https://www.flipkart.com/search?q=mobiles5g&otracker=search&otracker1=search&marketplace=FLIPKART&as-show=on&as=off", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("callback", 
		"URL=https://2.rome.api.flipkart.com/api/1/connekt/push/callback", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(4);

	

	return 0;
}
# 5 "d:\\lr scripts\\contactlist\\contact\\\\combined_contact.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "d:\\lr scripts\\contactlist\\contact\\\\combined_contact.c" 2

