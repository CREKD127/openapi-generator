/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.6.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AnyType.h
 *
 * This is the implementation of an any JSON type.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AnyType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AnyType_H_


#include "CppRestPetstoreClient/Object.h"

#include <cpprest/details/basic_types.h>
#include <cpprest/json.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class  AnyType : public Object {
public:
  AnyType();
  virtual ~AnyType();

  /////////////////////////////////////////////
  /// ModelBase overrides
  void validate() override;

  web::json::value toJson() const override;
  bool fromJson(const web::json::value &json) override;

  void toMultipart(std::shared_ptr<MultipartFormData> multipart,
                   const utility::string_t &namePrefix) const override;
  bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                     const utility::string_t &namePrefix) override;

private:
  web::json::value m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AnyType_H_ */
