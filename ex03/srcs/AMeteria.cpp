/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMeteria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:40:00 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/26 16:02:54 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMeteria.hpp"

AMeteria::AMeteria() {}

AMeteria::AMeteria(std::string const &type) : type_(type) {}

AMeteria::AMeteria(AMeteria const &copyObj) : type_(copyObj.type_) {}

AMeteria&	AMeteria::operator=(AMeteria const &copyObj) {this->type_ = copyObj.type_;}

AMeteria::~AMeteria() {}

std::string const	&AMeteria::getType() const {retrun (this->type_);}

void	AMeteria::use(ICharacter& target)
{

}
