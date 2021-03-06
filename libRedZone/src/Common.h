/*
 * Common.h
 *
 *      Author: jc
 */

#pragma once

#if defined( __linux__ )
#  define RZ_LINUX
#elif defined( __APPLE__ )
#  define RZ_MACOS
#elif defined( _WIN32 ) || defined( _WIN64 )
#  define RZ_WINDOWS
#else
#  error "Unknown OS"
#endif

#if defined( RZ_LINUX ) || defined( RZ_MACOS )
	define RZ_UNIX
#endif

#include <string>

namespace RedZone {

// Taken from here http://stackoverflow.com/a/15167203/2080453
std::string dbl2str( double d );

std::string replaceString( std::string subject, const std::string & search, const std::string & replace );

void trimString( std::string & str );

bool isReadableFile( std::string const & filePath );

typedef std::string( *StrConcat )( std::string const &, std::string const & );
static StrConcat strConcat = std::operator+;

} /* namespace RedZone */
