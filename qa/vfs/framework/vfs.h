// OSX deprecated getdirentries().
#define _DARWIN_NO_64_BIT_INODE

#include <sys/stat.h>

#ifndef VFS_H
#define VFS_H

extern const char* gData1;
extern const char* gData2;
extern const char* gData3;
extern const int gBufSmall;
extern const int gBufLarge;
extern const int gBufHuge;
extern const int gBufBlockSize;
extern uint8_t testGifBytes[];
extern uint8_t testPngBytes[];
extern uint8_t testJsonBytes[];
extern uint8_t testXmlBytes[];

// Utility functions
void setup( void );
void runASTests( void );
void runCTests( void );
//void runHttpTests( void );
void printStat( struct stat *p );
void printPass( const char* );
void printFail( const char*, const char* );
void printDebug( const char* );
void printDone( void );
void printTotals( void );
void exitPlayer( void );
int searchForDir( const char* );
int searchForFile( const char* );
int verifyFileContents( const char*, const char*, const char* );
int createFiles( const char*, const char*, int );

// Test thoroughly.  These are all done with the compressed file system.
void runHttpOpenTests( void );
void open_http_rdwr( void );
void runOpenTests( void );
void open_rdwr_noFile( void );
void open_rdwr_open( void );
void open_rdwr_dir( void );
void open_rdwr_openWriteAndRead( void );
void open_rdwrAppend( void );
void open_rdwrCreat( void );
void open_rdwrCreatExcl( void );
void open_rdwrTrunc( void );
void open_rdonly_noFile( void );
void open_rdonly_read( void );
void open_rdonly_write( void );
void open_rdonly_dir( void );
void open_rdonlyAppend( void );
void open_rdonlyCreat( void );
void open_rdonlyCreatExcl( void );
void open_wronly_dir( void );
void open_wronly_read( void );
void open_wronly_write( void );
void open_wronlyAppend( void );
void open_wronlyCreat( void );
void open_wronlyCreatInNonexistantDir( void );
void open_wronlyCreat_read( void );
void open_wronlyCreatExcl( void );
void open_wronlyTrunc( void );
void open_255chars( void );
void open_hugeName( void );
void open_emptyName( void );
void open_notDir( void );
void open_rdonlyfs_rdonly( void );
void open_rdonlyfs_rdwr( void );
void open_rdonlyfs_creat( void );
void runReadTests( void );
void read_updateAccessTime( void );
void read_emptyFile( void );
void read_noBytes( void );
void read_oneByte( void );
void read_subsequentReads( void );
void read_beyondEOF( void );
void read_ebadf( void );
void read_lseekSet( void );
void read_lseekCur( void );
void read_lseekEnd( void );
void read_lseekBeyondEnd1( void );
void read_lseekBeyondEnd2( void );
void read_lseekBeyondEnd3( void );
void runWriteTests( void );
void write_overwrite( void );
void write_several( void );
void write_subsequentOverwrite( void );
void write_subsequentAppend( void );
void write_read( void );
void write_nByteTooBig( void );
void write_nByteZero( void );
void write_nByteZeroError( void );
void write_timeFields( void );
void write_ebadf( void );
void runCloseTests( void );
void close_basic( void );
void close_twice( void );
void close_multipleRefs( void );
void runMkdirTests( void );
void mkdir_basic( void );
void mkdir_leadingSlash( void );
void mkdir_trailingSlash( void );
void mkdir_slashes( void );
void mkdir_addFile( void );
void mkdir_addDir( void );
void mkdir_eexist1( void );
void mkdir_eexist2( void );
void mkdir_eexist3( void );
void mkdir_dotdot( void );
void mkdir_mixedDots( void );
void mkdir_tooHigh( void );
void mkdir_pathElementMissing( void );
void mkdir_emptyString( void );
void mkdir_onlySlash( void );
void mkdir_enotdir( void );
void mkdir_fileTimes1( void );
void mkdir_fileTimes2( void );
void mkdir_rdonlyfs( void );
void runRmdirTests( void );
void rmdir_empty( void );
void rmdir_file( void );
void rmdir_dir( void );
void rmdir_fileTimes( void );
void rmdir_dot( void );
void rmdir_dotdot( void );
void rmdir_dotFinal( void );
void rmdir_dotdotFinal( void );
void rmdir_enoent( void );
void rmdir_enotdir( void );
void rmdir_rdonlyfs( void );
void runStatTests( void );
void stat_file( void );
void stat_largeFile( void );
void stat_dir( void );
void stat_enoent( void );
void stat_enotdir( void );
void runFstatTests( void );
void fstat_file( void );
void fstat_largeFile( void );
void fstat_dir( void );
void fstat_ebadf( void );
void runLseekTests( void );
void lseek_ebadf( void );
void lseek_einvalWhence( void );
void lseek_doesNotExpand( void );
void lseek_set_setNeg( void );
void lseek_set_setZero( void );
void lseek_set_setOne( void );
void lseek_set_setLast( void );
void lseek_set_setBeyondEnd( void );
void lseek_cur_startMinusOne( void );
void lseek_cur_start0( void );
void lseek_cur_startPlusOne( void );
void lseek_cur_endMinusOne( void );
void lseek_cur_end0( void );
void lseek_cur_endPlusOne( void );
void lseek_end_setNeg( void );
void lseek_end_setZero( void );
void lseek_end_setOne( void );
void lseek_end_setLast( void );
void lseek_end_setBeyondEnd( void );
void runUnlinkTests( void );
void unlink_file( void );
void unlink_enoent( void );
void unlink_enotdir( void );
void unlink_recreate( void );
void unlink_rdonlyfs( void );
void runFcntlTests( void );
void fcntl_dupfd( void );
void fcntl_fgetfl( void );
void fcntl_fsetfl( void );
void runGetdirentriesTests( void );
void getdirentries_oneFile( void );
void getdirentries_oneDir( void );
void getdirentries_filesAndDirs( void );
void getdirentries_limitBytes( void );
void getdirentries_basep( void );


/******************************************
 ******************************************
 The following methods are tested lightly!
 ******************************************
 ******************************************/
 
void runOpendirTests( void );
void opendir_basic( void );
void opendir_enoent( void );
void opendir_enotdir( void );
void runClockgettimeTests( void );
void clock_gettime_basic( void );
void runIfstreamTests( void );
void ifstream_basic( void );
void runOfstreamTests( void );
void ofstream_basic( void );
void runReaddirTests( void );
void readdir_oneFile( void );
void readdir_filesAndDirs( void );
//void readdir_ebadf( void ); Not supported.
void runTelldirTests( void );
void telldir_manyFiles( void );
void runFopenTests( void );
void fopen_basic( void );
void fopen_enoent( void );
void fopen_enotdir( void );
void fopen_einval( void );
void fopen_eisdir( void );
void fopen_emptyName( void );
void runFreopenTests( void );
void freopen_new_file( void );
void freopen_new_mode( void );
void runFreadTests( void );
void fread_basic( void );
void fread_subsequent( void );
void fread_ebadf( void );
void runFwriteTests( void );
void fwrite_basic( void );
void fwrite_subsequent( void );
void fwrite_ebadf( void );
void runFputcTests( void );
void fputc_basic( void );
void fputc_subsequent( void );
void fputc_ebadf( void );
void runFputsTests( void );
void fputs_basic( void );
void fputs_subsequent( void );
void fputs_ebadf( void );
void runFcloseTests( void );
void fclose_basic( void );
void fclose_ebadf( void );
void runClosedirTests( void );
void closedir_basic( void );
void closedir_twice( void );
void runRewindTests( void );
void rewind_file( void );
void rewind_empty( void );
void rewind_ebadf( void );
void runFflushTests( void );
void fflush_basic( void );
void fflush_ebadf( void );
void runFseekTests( void );
void fseek_set( void );
void fseek_end( void );
void fseek_cur( void );
void runFsetgetposTests( void );
void fsetgetpos_basic( void );
void fsetpos_ungetc( void );
void fsetpos_ebadf( void );
void fgetpos_ebadf( void );
void runRenameTests( void );// The rename() method isn't implemented yet (ALC-386).
void rename_file( void );
void rename_dir( void );
void rename_populatedDir( void );
void rename_dirExists( void );
void rename_dirExistsAndPopulated( void );
void rename_fileToDir( void );
void rename_dirToFile( void );
void rename_moveFile( void );
void rename_replaceFile( void );
void rename_same( void );
void rename_emptyString( void );
void rename_noExist( void );
void rename_enotdir( void );
void rename_rdonlyfs( void );
void runPrintfTests( void );
void printf_noflags( void );
void printf_types( void );
void printf_fieldwidth( void );
void printf_precision( void );
void printf_conversionMod( void );
void runFerrorTests( void );
void ferror_error( void );
void ferror_noError( void );
void runSetbufTests( void );
void setbuf_basic( void );

/******************************************
 ******************************************
 The following are basic tests of types
 of file systems.  Only compressed is used
 for the bulk of the testing (above).
 ******************************************
 ******************************************/
void runCompressedVFSTests( void );
void compressed_basic( void );
void compressed_empty( void );
void compressed_singleQuotes( void );
void compressed_grave( void );
void compressed_space( void );
void compressed_space2( void );
void compressed_longName( void );
void compressed_longDir( void );
void compressed_unicode( void );
void compressed_dotFile( void );
void compressed_dotDotFile( void );
void compressed_dotDir( void );
void compressed_dotDotDir( void );
void compressed_statFile( void );
void compressed_statDir( void );
void compressed_open( void );
void compressed_close( void );
void compressed_read( void );
void compressed_write( void );
void compressed_newFile( void );
void compressed_newDir( void );
void compressed_getdirentries( void );
void compressed_gif( void );
void compressed_json( void );
void compressed_xml( void );
void compressed_png( void );

void runEmbeddedVFSTests( void );
void embedded_basic( void );
void embedded_empty( void );
void embedded_singleQuotes( void );
void embedded_grave( void );
void embedded_space( void );
void embedded_space2( void );
void embedded_longName( void );
void embedded_longDir( void );
void embedded_unicode( void );
void embedded_dotFile( void );
void embedded_dotDotFile( void );
void embedded_dotDir( void );
void embedded_dotDotDir( void );
void embedded_statFile( void );
void embedded_statDir( void );
void embedded_open( void );
void embedded_close( void );
void embedded_read( void );
void embedded_write( void );
void embedded_newFile( void );
void embedded_newDir( void );
void embedded_getdirentries( void );
void embedded_gif( void );
void embedded_json( void );
void embedded_xml( void );
void embedded_png( void );
void embedded_open_rdonlyfs_rdonly( void );
void embedded_open_rdonlyfs_rdwr( void );
void embedded_open_rdonlyfs_creat( void );

void runCompressedCustomPackageTests( void );
void compressed_custom_package_basic( void );

void runWebVFSTests( void );
void web_basic( void );
void web_empty( void );
void web_singleQuotes( void );
void web_grave( void );
void web_space( void );
void web_space2( void );
void web_longName( void );
void web_longDir( void );
void web_unicode( void );
void web_dotFile( void );
void web_dotDotFile( void );
void web_dotDir( void );
void web_dotDotDir( void );
void web_statFile( void );
void web_statDir( void );
void web_open( void );
void web_close( void );
void web_read( void );
void web_write( void );
void web_newFile( void );
void web_newDir( void );
void web_getdirentries( void );
void web_gif( void );
void web_json( void );
void web_xml( void );
void web_png( void );
void web_open_rdonlyfs_rdonly( void );
void web_open_rdonlyfs_rdwr( void );
void web_open_rdonlyfs_creat( void );

void runLSOVFSTests( void );
void lso_basic( void );
void lso_empty( void );
void lso_singleQuotes( void );
void lso_grave( void );
void lso_space( void );
void lso_space2( void );
void lso_longName( void );
void lso_longDir( void );
void lso_dotFile( void );
void lso_dotDotFile( void );
void lso_dotDir( void );
void lso_dotDotDir( void );
void lso_statFile( void );
void lso_statDir( void );
void lso_open( void );
void lso_close( void );
void lso_read( void );
void lso_write( void );
void lso_newFile( void );
void lso_newDir( void );
void lso_getdirentries( void );
void lso_gif( void );
void lso_json( void );
void lso_xml( void );
void lso_png( void );

#endif