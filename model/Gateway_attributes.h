/**
 * ProcessMaker API
 * This ProcessMaker I/O API provides access to a BPMN 2.0 compliant workflow engine api that is designed to be used as a microservice to support enterprise cloud applications.  The current Alpha 1.0 version supports most of the descriptive class of the BPMN 2.0 specification.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@processmaker.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Gateway_attributes.h
 * 
 * 
 */

#ifndef Gateway_attributes_H_
#define Gateway_attributes_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

/// <summary>
/// 
/// </summary>
class  Gateway_attributes
	: public ModelBase
{
public:
    Gateway_attributes();
    virtual ~Gateway_attributes();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// Gateway_attributes members
	   
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    void setDescription(utility::string_t value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getProcessId() const;
    void setProcessId(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    void setType(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getDirection() const;
    void setDirection(utility::string_t value);
    bool directionIsSet() const;
    void unsetDirection();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCreatedAt() const;
    void setCreatedAt(utility::string_t value);
    bool created_atIsSet() const;
    void unsetCreated_at();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUpdatedAt() const;
    void setUpdatedAt(utility::string_t value);
    bool updated_atIsSet() const;
    void unsetUpdated_at();
    
protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
utility::string_t m_Description;
    bool m_DescriptionIsSet;
utility::string_t m_Process_id;
    utility::string_t m_Type;
    utility::string_t m_Direction;
    bool m_DirectionIsSet;
utility::string_t m_Created_at;
    bool m_Created_atIsSet;
utility::string_t m_Updated_at;
    bool m_Updated_atIsSet;
};

}
}
}
}

#endif /* Gateway_attributes_H_ */