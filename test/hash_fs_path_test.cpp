// Copyright 2022 Peter Dimov.
// Distributed under the Boost Software License, Version 1.0.
// https://www.boost.org/LICENSE_1_0.txt

#include <boost/filesystem/path.hpp>
#include <boost/container_hash/hash.hpp>
#include <boost/core/lightweight_test.hpp>

template<class T> std::size_t hv( T const& t )
{
    return boost::hash<T>()( t );
}

int main()
{
    boost::filesystem::path p1( "/foo/bar" );
    boost::filesystem::path p2( "/foo/baz" );

    BOOST_TEST_NE( hv( p1 ), hv( p2 ) );

    return boost::report_errors();
}
