/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.14.v202310241606.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#include <v1/commonapi/examples/AttributesSomeIPStubAdapter.hpp>
#include <v1/commonapi/examples/Attributes.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {
namespace examples {

std::shared_ptr<CommonAPI::SomeIP::StubAdapter> createAttributesSomeIPStubAdapter(
                   const CommonAPI::SomeIP::Address &_address,
                   const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared< AttributesSomeIPStubAdapter<::v1::commonapi::examples::AttributesStub>>(_address, _connection, _stub);
}

void initializeAttributesSomeIPStubAdapter() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:commonapi.examples.Attributes:v1_0:commonapi.examples.Attributes",
         0x1234, 0x5678, 1, 0);
    CommonAPI::SomeIP::Factory::get()->registerStubAdapterCreateMethod(
        "commonapi.examples.Attributes:v1_0",
        &createAttributesSomeIPStubAdapter);
}

INITIALIZER(registerAttributesSomeIPStubAdapter) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeAttributesSomeIPStubAdapter);
}

} // namespace examples
} // namespace commonapi
} // namespace v1