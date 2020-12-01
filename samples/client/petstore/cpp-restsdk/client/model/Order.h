/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Order.h
 *
 * An order for a pets from the pet store
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Order_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Order_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An order for a pets from the pet store
/// </summary>
class  Order
    : public ModelBase
{
public:
    Order();
    virtual ~Order();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Order members

    /// <summary>
    /// 
    /// </summary>
    int64_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getPetId() const;
    bool petIdIsSet() const;
    void unsetPetId();

    void setPetId(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getQuantity() const;
    bool quantityIsSet() const;
    void unsetQuantity();

    void setQuantity(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getShipDate() const;
    bool shipDateIsSet() const;
    void unsetShipDate();

    void setShipDate(const utility::datetime& value);

    /// <summary>
    /// Order Status
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isComplete() const;
    bool completeIsSet() const;
    void unsetComplete();

    void setComplete(bool value);


protected:
    int64_t m_Id;
    bool m_IdIsSet;
    int64_t m_PetId;
    bool m_PetIdIsSet;
    int32_t m_Quantity;
    bool m_QuantityIsSet;
    utility::datetime m_ShipDate;
    bool m_ShipDateIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    bool m_Complete;
    bool m_CompleteIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Order_H_ */
