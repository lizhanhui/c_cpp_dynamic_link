#include <boost/log/trivial.hpp>
#include <boost/log/core.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/support/date_time.hpp>
#include <boost/log/sinks/text_file_backend.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/sources/severity_logger.hpp>
#include <boost/log/sources/record_ostream.hpp>

void init_logging() {
    boost::log::add_file_log("/Users/lizhanhui/oms.log");
    boost::log::core::get()->set_filter(boost::log::trivial::severity >= boost::log::trivial::info);
    boost::log::add_common_attributes();
}

int main(int argc, char *argv[]) {

    BOOST_LOG_TRIVIAL(info) << "Boost log item";


    return 0;
}
