#include <daneel/daneel.hpp>

class HelloWorldDamsallemHandler final : public daneel::RequestHandler
{
    public:

        daneel::Response handleRequest(const daneel::RequestParameters& params)
        {
            daneel::Response response;
            response.addResult("Hello World from David !");
            return response;
        }
};
