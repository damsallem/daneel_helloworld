#include <daneel/daneel.hpp>

class MyRequestHandler final : public daneel::RequestHandler
{
    public:

        daneel::Response handleRequest(const daneel::RequestParameters& params)
        {
            daneel::Response response;
            response.addResult("Hello World !");
            return response;
        }
};
